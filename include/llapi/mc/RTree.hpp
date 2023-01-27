/**
 * @file  RTree.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RTree.
 *
 */
class RTree {

#define AFTER_EXTRA
// Add Member There
public:
struct Hint {
    Hint() = delete;
    Hint(Hint const&) = delete;
    Hint(Hint const&&) = delete;
};
class Node {
public:
    Node() = delete;
    Node(Node const&) = delete;
    Node(Node const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RTREE
public:
    class RTree& operator=(class RTree const &) = delete;
    RTree(class RTree const &) = delete;
    RTree() = delete;
#endif

public:
    /**
     * @symbol ??1RTree@@QEAA@XZ
     * @hash   1789810188
     */
    MCAPI ~RTree();
    /**
     * @symbol ?create@RTree@@SA?AV?$optional@VRTree@@@std@@AEBV?$vector@UBiomeNoiseTarget@@V?$allocator@UBiomeNoiseTarget@@@std@@@3@@Z
     * @hash   -1222843356
     */
    MCAPI static class std::optional<class RTree> create(std::vector<struct BiomeNoiseTarget> const &);

//private:
    /**
     * @symbol ?build@RTree@@CA?AV?$optional@VNode@RTree@@@std@@$$QEAV?$vector@VNode@RTree@@V?$allocator@VNode@RTree@@@std@@@3@@Z
     * @hash   371135202
     */
    MCAPI static class std::optional<class RTree::Node> build(std::vector<class RTree::Node> &&);

private:

};