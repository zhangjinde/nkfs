#pragma once

int nkfs_balloc_bm_clear(struct nkfs_sb *sb);
int nkfs_balloc_block_free(struct nkfs_sb *sb, u64 block);
int nkfs_balloc_block_alloc(struct nkfs_sb *sb, u64 *pblock);
int nkfs_balloc_block_mark(struct nkfs_sb *sb, u64 block, int use);
