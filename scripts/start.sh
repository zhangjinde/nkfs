#!/bin/bash
. scripts/common.sh
log "start"
ext_ip=$1
exec scripts/load_mods.sh
exec scripts/loop_dev_create.sh
exec bin/nkfs_ctl dev_add -d /dev/loop0 -f
exec bin/nkfs_ctl dev_add -d /dev/loop1 -f
exec bin/nkfs_ctl dev_add -d /dev/loop2 -f
exec iptables -F
exec bin/nkfs_ctl srv_start -b 0.0.0.0 -e $ext_ip -p 9111
