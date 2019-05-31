#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <algorithm>

template <typename T>
int easyfind(T container, int occ){
    typename T::iterator it;
    typename T::iterator itBeg = container.begin();
    typename T::iterator itEnd = container.end();

        if ((it = find(itBeg, itEnd, occ)) != itEnd)
            return std::distance(itBeg, it);
        throw(std::runtime_error("Value not found."));
}
#endif
