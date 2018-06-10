#ifndef BLOBPTR_H_INCLUDED
#define BLOBPTR_H_INCLUDED

#include "Blob.h"

template <typename> class BlobPtr;

template <typename T>
bool operator ==(const BlobPtr<T> &lhs,const BlobPtr<T> &rhs);

template <typename T>
bool operator <(const BlobPtr<T> &lhs,const BlobPtr<T> &rhs);


template <typename T>
class BlobPtr
{
    friend bool operator ==<T>
	(const BlobPtr<T>& lhs, const BlobPtr<T>& rhs);

	friend bool operator < <T>
		(const BlobPtr<T>& lhs, const BlobPtr<T>& rhs);
public:
    BlobPtr():curr(0) {}
    BlobPtr(Blob<T> &a,size_t sz) : wptr(a.data),curr(sz) { }
    T& operator*() const
    {
        auto p = check(curr,"deference past end");
        return (*p)[curr];
    }

    // prefix
	BlobPtr& operator++();
	BlobPtr& operator--();

	// postfix
	BlobPtr operator ++(int);
	BlobPtr operator --(int);
private:
    std::shared_ptr<std::vector<T>>
        check(size_t i,const std::string &msg) const;
    std::weak_ptr<std::vector<T>> wptr;
    size_t curr;
};

template <typename T>
std::shared_ptr<std::vector<T>>
        BlobPtr<T>::check(size_t i,const std::string &msg) const
{
    auto ret = wptr.lock();
    if (!ret) throw std::runtime_error("unbound BlobPtr");
    if (i >= ret->size()) throw std::out_of_range(msg);
    return ret;
}

template <typename T>
BlobPtr<T>& BlobPtr<T>::operator++()
{
    check(curr,"increment past end of BlobPtr");
    ++curr;
    return *this;
}

template <typename T>
BlobPtr<T>& BlobPtr<T>::operator--()
{
    --curr;
    check(curr,"decrement past begin of BlobPtr");
    return *this;
}

template <typename T>
BlobPtr<T> BlobPtr<T>::operator++(int)
{
    auto ret = *this;
    ++*this;
    return ret;
}

template <typename T>
BlobPtr<T> BlobPtr<T>::operator--(int)
{
    auto ret = *this;
     --*this;
    return ret;
}

template<typename T> bool operator==(const BlobPtr<T> &lhs, const BlobPtr<T> &rhs)
{
	if (lhs.wptr.lock() != rhs.wptr.lock())
	{
		throw std::runtime_error("ptrs to different Blobs!");
	}
	return lhs.curr == rhs.curr;
}

template<typename T> bool operator< (const BlobPtr<T> &lhs, const BlobPtr<T> &rhs)
{
	if (lhs.wptr.lock() != rhs.wptr.lock())
	{
		throw std::runtime_error("ptrs to different Blobs!");
	}
	return lhs.curr < rhs.curr;
}

#endif // BLOBPTR_H_INCLUDED
