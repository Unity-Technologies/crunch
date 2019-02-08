#pragma once
#include "crn_mem.h"

namespace crnlib
{
    template <class T>
    class allocator
    {
    public:
        using value_type = T;
        template <class U> allocator(allocator<U> const&) noexcept {}
        allocator() noexcept {};

        value_type* allocate(std::size_t n)
        {
            return static_cast<T*>(crnlib_malloc(n * sizeof(T)));
        }
        
        void deallocate(value_type* p, std::size_t) noexcept 
        {
            crnlib_delete(p);
        }
    };

    template <class T, class U>
    bool operator==(allocator<T> const&, allocator<U> const&) noexcept
    {
        return true;
    }

    template <class T, class U>
    bool operator!=(allocator<T> const& x, allocator<U> const& y) noexcept
    {
        return !(x == y);
    }
}