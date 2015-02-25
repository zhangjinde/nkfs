#pragma once
#include <linux/init.h>
#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/major.h>
#include <linux/blkdev.h>
#include <linux/bio.h>
#include <linux/highmem.h>
#include <linux/mutex.h>
#include <linux/fs.h>
#include <linux/slab.h>
#include <linux/cdrom.h>
#include <linux/workqueue.h>
#include <linux/timer.h>
#include <linux/cdev.h>
#include <linux/kthread.h>
#include <linux/time.h>
#include <linux/wait.h>
#include <linux/delay.h>
#include <linux/miscdevice.h>
#include <linux/file.h>
#include <linux/sort.h>
#include <linux/buffer_head.h>
#include <asm/uaccess.h>
#include <linux/kernel.h>
#include <linux/errno.h>
#include <linux/types.h>
#include <linux/ip.h>
#include <linux/in.h>
#include <linux/delay.h>
#include <linux/rbtree.h>
#include <linux/completion.h>
#include <linux/version.h>
#include <net/sock.h>
#include <asm/ioctls.h>

#include <include/nkfs_ctl.h>
#include <include/nkfs_obj_id.h>
#include <include/nkfs_image.h>
#include <include/nkfs_net.h>
#include <include/nkfs_obj_info.h>

#include <crt/include/crt.h>

#define NKFS_BUG_ON(cond)				\
	do {						\
		if (cond) {				\
			KLOG(KL_ERR, "BUG_ON()");	\
			klog_sync();			\
		}					\
		BUG_ON(cond);				\
	} while (0);					\

#define NKFS_BUG()	NKFS_BUG_ON(1)

#include <inc/helpers.h>
#include <inc/ksocket.h>
#include <inc/btree.h>
#include <inc/dev.h>
#include <inc/net.h>
#include <inc/super.h>
#include <inc/balloc.h>
#include <inc/inode.h>
#include <inc/upages.h>
#include <inc/route.h>
#include <inc/dio.h>
