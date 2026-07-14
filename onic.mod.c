#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5af09d8b, "_raw_spin_lock" },
	{ 0x96723eda, "pci_unregister_driver" },
	{ 0xb48573e3, "netdev_err" },
	{ 0xd272d446, "__fentry__" },
	{ 0x6d060c9f, "wake_up_process" },
	{ 0xf205c29f, "dev_driver_string" },
	{ 0xfc919af3, "dev_addr_mod" },
	{ 0x9c32b48d, "eth_type_trans" },
	{ 0x5a844b26, "__x86_indirect_thunk_r11" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0x7b2755fe, "dma_map_page_attrs" },
	{ 0x77bc2e46, "napi_complete_done" },
	{ 0xd272d446, "dump_stack" },
	{ 0x9cf7ffd4, "__alloc_pages_noprof" },
	{ 0xf00d45ac, "kstrtou16" },
	{ 0xe8213e80, "_printk" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0xd272d446, "schedule" },
	{ 0x6ac784f4, "schedule_timeout" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0xff0106da, "refcount_warn_saturate" },
	{ 0x8ce83585, "queue_delayed_work_on" },
	{ 0x5af09d8b, "_raw_spin_unlock_bh" },
	{ 0x227a7a62, "__napi_schedule" },
	{ 0xcade6c74, "hex_dump_to_buffer" },
	{ 0xa30a6f21, "pci_enable_msix_range" },
	{ 0x9479a1e8, "strnlen" },
	{ 0x7ec472ba, "numa_node" },
	{ 0x5a844b26, "__x86_indirect_thunk_rdx" },
	{ 0xdfb0fec4, "__free_pages" },
	{ 0x74d1286c, "_dev_info" },
	{ 0x86d206f6, "__SCT__WARN_trap" },
	{ 0x61079369, "print_hex_dump" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0xbd03ed67, "page_offset_base" },
	{ 0xd70733be, "sized_strscpy" },
	{ 0xe5179ac5, "hugetlb_optimize_vmemmap_key" },
	{ 0x7a5ffe84, "init_wait_entry" },
	{ 0x74d1286c, "_dev_err" },
	{ 0xd09b06f5, "kstrtoint" },
	{ 0x9126ce86, "request_threaded_irq" },
	{ 0xdd948a7b, "netif_set_real_num_tx_queues" },
	{ 0xaef1f20d, "system_percpu_wq" },
	{ 0x32feeafc, "mod_timer" },
	{ 0x71f3b764, "netif_set_real_num_rx_queues" },
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0xbeb1d261, "destroy_workqueue" },
	{ 0x9aa6980d, "mutex_lock" },
	{ 0xb24148a7, "kmem_cache_free" },
	{ 0xe0eeabcb, "dma_alloc_attrs" },
	{ 0xe02fd1d8, "debugfs_remove" },
	{ 0x227a7a62, "napi_enable" },
	{ 0x2435d559, "strncmp" },
	{ 0x64750d72, "netif_receive_skb" },
	{ 0xccdf694f, "register_netdev" },
	{ 0xc609ff70, "strncpy" },
	{ 0xa90cd3c4, "free_netdev" },
	{ 0xbd03ed67, "phys_base" },
	{ 0x4f1e5fd0, "__list_del_entry_valid_or_report" },
	{ 0x97dd6ca9, "ioremap" },
	{ 0x2548f01a, "kthread_stop" },
	{ 0x29848d75, "ethtool_op_get_link" },
	{ 0xe54e0a6b, "__fortify_panic" },
	{ 0x444885a7, "_raw_spin_unlock_irqrestore" },
	{ 0xc1e6da50, "_raw_spin_trylock_bh" },
	{ 0x91f966bb, "kstrtou8" },
	{ 0xccb0d9b9, "pci_iounmap" },
	{ 0xa90cd3c4, "netif_tx_stop_all_queues" },
	{ 0x0e9cab28, "memset" },
	{ 0x5a844b26, "__x86_indirect_thunk_r10" },
	{ 0x4190f3a0, "pci_set_master" },
	{ 0xbeb1d261, "__flush_workqueue" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x86ce6feb, "kmem_cache_alloc_noprof" },
	{ 0xe804603d, "__init_waitqueue_head" },
	{ 0x07df5db1, "kthread_bind" },
	{ 0x4e4d6007, "__kmem_cache_create_args" },
	{ 0x95f22a70, "pcie_capability_clear_and_set_word_unlocked" },
	{ 0xb67f49df, "__netif_napi_del_locked" },
	{ 0x5df6175c, "__dynamic_netdev_dbg" },
	{ 0x058c185a, "jiffies" },
	{ 0xa613a265, "dma_set_coherent_mask" },
	{ 0x2c56d6c6, "kthread_create_on_node" },
	{ 0xdd6830c7, "sprintf" },
	{ 0xbd03ed67, "vmemmap_base" },
	{ 0x82fd7238, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xff4c8a63, "dma_free_attrs" },
	{ 0x08a6bd35, "pcie_get_readrq" },
	{ 0x9aa6980d, "mutex_unlock" },
	{ 0x85acaba2, "cancel_delayed_work_sync" },
	{ 0xb6d1d1fb, "pci_release_regions" },
	{ 0xcbae5412, "__const_udelay" },
	{ 0x5a844b26, "__x86_indirect_thunk_rcx" },
	{ 0x62192c3b, "__folio_put" },
	{ 0x30eb81ed, "__dynamic_pr_debug" },
	{ 0x7a5d3ece, "__kmalloc_cache_noprof" },
	{ 0x47f8f7e5, "netif_carrier_off" },
	{ 0x5a844b26, "__x86_indirect_thunk_r9" },
	{ 0x71798f7e, "delayed_work_timer_fn" },
	{ 0x74fc8f40, "pci_disable_sriov" },
	{ 0x5af09d8b, "_raw_spin_lock_bh" },
	{ 0x47f8f7e5, "netif_carrier_on" },
	{ 0xc650d2b9, "pci_disable_msix" },
	{ 0x4190f3a0, "pci_disable_device" },
	{ 0x02f9bbf0, "timer_init_key" },
	{ 0x0a590435, "pcie_set_readrq" },
	{ 0xa613a265, "dma_set_mask" },
	{ 0xdf4bee3d, "alloc_workqueue_noprof" },
	{ 0x227a7a62, "__napi_schedule_irqoff" },
	{ 0x69b8473b, "napi_schedule_prep" },
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0x43a349ca, "strlen" },
	{ 0x227a7a62, "napi_disable" },
	{ 0xc5d558c1, "dev_kfree_skb_any_reason" },
	{ 0xbd9aacde, "round_jiffies" },
	{ 0x303b8f4e, "debugfs_create_dir" },
	{ 0x5af09d8b, "_raw_spin_unlock" },
	{ 0x6ec76014, "pci_enable_sriov" },
	{ 0x5a844b26, "__x86_indirect_thunk_r8" },
	{ 0x7851be11, "__SCT__might_resched" },
	{ 0x5f878bdd, "kmalloc_caches" },
	{ 0xb48573e3, "netdev_info" },
	{ 0xaaf7a406, "kmem_cache_destroy" },
	{ 0xd272d446, "synchronize_net" },
	{ 0xb91aacdc, "napi_alloc_skb" },
	{ 0x74cb0e30, "alloc_etherdev_mqs" },
	{ 0x9dd4105e, "free_irq" },
	{ 0xc45d298e, "is_vmalloc_addr" },
	{ 0xa72a66df, "__skb_pad" },
	{ 0xa96d32ba, "__udelay" },
	{ 0x1abc7887, "release_firmware" },
	{ 0xdc352a3b, "__list_add_valid_or_report" },
	{ 0x6384042e, "pci_msix_vec_count" },
	{ 0x08a6bd35, "pci_enable_device" },
	{ 0xb6d2afcd, "__num_online_cpus" },
	{ 0x534ed5f3, "__msecs_to_jiffies" },
	{ 0xd710adbf, "__kmalloc_noprof" },
	{ 0x1c7de324, "pci_bus_max_busnr" },
	{ 0xb2f8db08, "pci_iomap" },
	{ 0x40a621c5, "snprintf" },
	{ 0x6d9189d4, "pci_vfs_assigned" },
	{ 0x49733ad6, "queue_work_on" },
	{ 0xa90cd3c4, "unregister_netdev" },
	{ 0xb730487b, "finish_wait" },
	{ 0x38daa6a0, "__kmalloc_node_noprof" },
	{ 0xea6ad6cf, "dma_unmap_page_attrs" },
	{ 0xb0102865, "request_firmware" },
	{ 0x0e96214f, "__pci_register_driver" },
	{ 0x12ad300e, "iounmap" },
	{ 0x6d9189d4, "pci_num_vf" },
	{ 0x6f265cf3, "pci_request_regions" },
	{ 0xb2fa43dd, "kernel_sigaction" },
	{ 0xfbe7861b, "memcpy" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0x2352b148, "timer_delete" },
	{ 0x80984e2f, "netif_napi_add_weight_locked" },
	{ 0xc281f1fb, "prepare_to_wait_event" },
	{ 0xc5d558c1, "dev_kfree_skb_irq_reason" },
	{ 0x5e505530, "kthread_should_stop" },
	{ 0x68a1b6c6, "__wake_up" },
	{ 0x11f4259a, "_raw_spin_lock_irqsave" },
	{ 0x5ae9ee26, "__per_cpu_offset" },
	{ 0xb0c84d61, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x5af09d8b,
	0x96723eda,
	0xb48573e3,
	0xd272d446,
	0x6d060c9f,
	0xf205c29f,
	0xfc919af3,
	0x9c32b48d,
	0x5a844b26,
	0x5a844b26,
	0x7b2755fe,
	0x77bc2e46,
	0xd272d446,
	0x9cf7ffd4,
	0xf00d45ac,
	0xe8213e80,
	0xbd03ed67,
	0xd272d446,
	0x6ac784f4,
	0xd272d446,
	0xff0106da,
	0x8ce83585,
	0x5af09d8b,
	0x227a7a62,
	0xcade6c74,
	0xa30a6f21,
	0x9479a1e8,
	0x7ec472ba,
	0x5a844b26,
	0xdfb0fec4,
	0x74d1286c,
	0x86d206f6,
	0x61079369,
	0x90a48d82,
	0xbd03ed67,
	0xd70733be,
	0xe5179ac5,
	0x7a5ffe84,
	0x74d1286c,
	0xd09b06f5,
	0x9126ce86,
	0xdd948a7b,
	0xaef1f20d,
	0x32feeafc,
	0x71f3b764,
	0xbd03ed67,
	0xbeb1d261,
	0x9aa6980d,
	0xb24148a7,
	0xe0eeabcb,
	0xe02fd1d8,
	0x227a7a62,
	0x2435d559,
	0x64750d72,
	0xccdf694f,
	0xc609ff70,
	0xa90cd3c4,
	0xbd03ed67,
	0x4f1e5fd0,
	0x97dd6ca9,
	0x2548f01a,
	0x29848d75,
	0xe54e0a6b,
	0x444885a7,
	0xc1e6da50,
	0x91f966bb,
	0xccb0d9b9,
	0xa90cd3c4,
	0x0e9cab28,
	0x5a844b26,
	0x4190f3a0,
	0xbeb1d261,
	0xd272d446,
	0x86ce6feb,
	0xe804603d,
	0x07df5db1,
	0x4e4d6007,
	0x95f22a70,
	0xb67f49df,
	0x5df6175c,
	0x058c185a,
	0xa613a265,
	0x2c56d6c6,
	0xdd6830c7,
	0xbd03ed67,
	0x82fd7238,
	0xff4c8a63,
	0x08a6bd35,
	0x9aa6980d,
	0x85acaba2,
	0xb6d1d1fb,
	0xcbae5412,
	0x5a844b26,
	0x62192c3b,
	0x30eb81ed,
	0x7a5d3ece,
	0x47f8f7e5,
	0x5a844b26,
	0x71798f7e,
	0x74fc8f40,
	0x5af09d8b,
	0x47f8f7e5,
	0xc650d2b9,
	0x4190f3a0,
	0x02f9bbf0,
	0x0a590435,
	0xa613a265,
	0xdf4bee3d,
	0x227a7a62,
	0x69b8473b,
	0xe4de56b4,
	0x43a349ca,
	0x227a7a62,
	0xc5d558c1,
	0xbd9aacde,
	0x303b8f4e,
	0x5af09d8b,
	0x6ec76014,
	0x5a844b26,
	0x7851be11,
	0x5f878bdd,
	0xb48573e3,
	0xaaf7a406,
	0xd272d446,
	0xb91aacdc,
	0x74cb0e30,
	0x9dd4105e,
	0xc45d298e,
	0xa72a66df,
	0xa96d32ba,
	0x1abc7887,
	0xdc352a3b,
	0x6384042e,
	0x08a6bd35,
	0xb6d2afcd,
	0x534ed5f3,
	0xd710adbf,
	0x1c7de324,
	0xb2f8db08,
	0x40a621c5,
	0x6d9189d4,
	0x49733ad6,
	0xa90cd3c4,
	0xb730487b,
	0x38daa6a0,
	0xea6ad6cf,
	0xb0102865,
	0x0e96214f,
	0x12ad300e,
	0x6d9189d4,
	0x6f265cf3,
	0xb2fa43dd,
	0xfbe7861b,
	0xcb8b6ec6,
	0x2352b148,
	0x80984e2f,
	0xc281f1fb,
	0xc5d558c1,
	0x5e505530,
	0x68a1b6c6,
	0x11f4259a,
	0x5ae9ee26,
	0xb0c84d61,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_raw_spin_lock\0"
	"pci_unregister_driver\0"
	"netdev_err\0"
	"__fentry__\0"
	"wake_up_process\0"
	"dev_driver_string\0"
	"dev_addr_mod\0"
	"eth_type_trans\0"
	"__x86_indirect_thunk_r11\0"
	"__x86_indirect_thunk_rax\0"
	"dma_map_page_attrs\0"
	"napi_complete_done\0"
	"dump_stack\0"
	"__alloc_pages_noprof\0"
	"kstrtou16\0"
	"_printk\0"
	"__ref_stack_chk_guard\0"
	"schedule\0"
	"schedule_timeout\0"
	"__stack_chk_fail\0"
	"refcount_warn_saturate\0"
	"queue_delayed_work_on\0"
	"_raw_spin_unlock_bh\0"
	"__napi_schedule\0"
	"hex_dump_to_buffer\0"
	"pci_enable_msix_range\0"
	"strnlen\0"
	"numa_node\0"
	"__x86_indirect_thunk_rdx\0"
	"__free_pages\0"
	"_dev_info\0"
	"__SCT__WARN_trap\0"
	"print_hex_dump\0"
	"__ubsan_handle_out_of_bounds\0"
	"page_offset_base\0"
	"sized_strscpy\0"
	"hugetlb_optimize_vmemmap_key\0"
	"init_wait_entry\0"
	"_dev_err\0"
	"kstrtoint\0"
	"request_threaded_irq\0"
	"netif_set_real_num_tx_queues\0"
	"system_percpu_wq\0"
	"mod_timer\0"
	"netif_set_real_num_rx_queues\0"
	"random_kmalloc_seed\0"
	"destroy_workqueue\0"
	"mutex_lock\0"
	"kmem_cache_free\0"
	"dma_alloc_attrs\0"
	"debugfs_remove\0"
	"napi_enable\0"
	"strncmp\0"
	"netif_receive_skb\0"
	"register_netdev\0"
	"strncpy\0"
	"free_netdev\0"
	"phys_base\0"
	"__list_del_entry_valid_or_report\0"
	"ioremap\0"
	"kthread_stop\0"
	"ethtool_op_get_link\0"
	"__fortify_panic\0"
	"_raw_spin_unlock_irqrestore\0"
	"_raw_spin_trylock_bh\0"
	"kstrtou8\0"
	"pci_iounmap\0"
	"netif_tx_stop_all_queues\0"
	"memset\0"
	"__x86_indirect_thunk_r10\0"
	"pci_set_master\0"
	"__flush_workqueue\0"
	"__x86_return_thunk\0"
	"kmem_cache_alloc_noprof\0"
	"__init_waitqueue_head\0"
	"kthread_bind\0"
	"__kmem_cache_create_args\0"
	"pcie_capability_clear_and_set_word_unlocked\0"
	"__netif_napi_del_locked\0"
	"__dynamic_netdev_dbg\0"
	"jiffies\0"
	"dma_set_coherent_mask\0"
	"kthread_create_on_node\0"
	"sprintf\0"
	"vmemmap_base\0"
	"__ubsan_handle_shift_out_of_bounds\0"
	"dma_free_attrs\0"
	"pcie_get_readrq\0"
	"mutex_unlock\0"
	"cancel_delayed_work_sync\0"
	"pci_release_regions\0"
	"__const_udelay\0"
	"__x86_indirect_thunk_rcx\0"
	"__folio_put\0"
	"__dynamic_pr_debug\0"
	"__kmalloc_cache_noprof\0"
	"netif_carrier_off\0"
	"__x86_indirect_thunk_r9\0"
	"delayed_work_timer_fn\0"
	"pci_disable_sriov\0"
	"_raw_spin_lock_bh\0"
	"netif_carrier_on\0"
	"pci_disable_msix\0"
	"pci_disable_device\0"
	"timer_init_key\0"
	"pcie_set_readrq\0"
	"dma_set_mask\0"
	"alloc_workqueue_noprof\0"
	"__napi_schedule_irqoff\0"
	"napi_schedule_prep\0"
	"__ubsan_handle_load_invalid_value\0"
	"strlen\0"
	"napi_disable\0"
	"dev_kfree_skb_any_reason\0"
	"round_jiffies\0"
	"debugfs_create_dir\0"
	"_raw_spin_unlock\0"
	"pci_enable_sriov\0"
	"__x86_indirect_thunk_r8\0"
	"__SCT__might_resched\0"
	"kmalloc_caches\0"
	"netdev_info\0"
	"kmem_cache_destroy\0"
	"synchronize_net\0"
	"napi_alloc_skb\0"
	"alloc_etherdev_mqs\0"
	"free_irq\0"
	"is_vmalloc_addr\0"
	"__skb_pad\0"
	"__udelay\0"
	"release_firmware\0"
	"__list_add_valid_or_report\0"
	"pci_msix_vec_count\0"
	"pci_enable_device\0"
	"__num_online_cpus\0"
	"__msecs_to_jiffies\0"
	"__kmalloc_noprof\0"
	"pci_bus_max_busnr\0"
	"pci_iomap\0"
	"snprintf\0"
	"pci_vfs_assigned\0"
	"queue_work_on\0"
	"unregister_netdev\0"
	"finish_wait\0"
	"__kmalloc_node_noprof\0"
	"dma_unmap_page_attrs\0"
	"request_firmware\0"
	"__pci_register_driver\0"
	"iounmap\0"
	"pci_num_vf\0"
	"pci_request_regions\0"
	"kernel_sigaction\0"
	"memcpy\0"
	"kfree\0"
	"timer_delete\0"
	"netif_napi_add_weight_locked\0"
	"prepare_to_wait_event\0"
	"dev_kfree_skb_irq_reason\0"
	"kthread_should_stop\0"
	"__wake_up\0"
	"_raw_spin_lock_irqsave\0"
	"__per_cpu_offset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010EEd0000903Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd0000913Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd0000923Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd0000933Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3667DBCFDCDCA577374A743");
