#pragma once

namespace binary_search_tree {
    template<typename T> class binary_tree {
        public:
            T data;
            binary_tree<T> left;
            binary_tree<T> right;
    };
}