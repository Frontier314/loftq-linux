/******************************************************************************
 *
 * Copyright(c) 2010 - 2012 Realtek Corporation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110, USA
 *
 *
 ******************************************************************************/
/*
 * Automatically generated C config: don't edit
 */

//***** temporarily flag *******
#define CONFIG_ODM_REFRESH_RAMASK
#define CONFIG_PHY_SETTING_WITH_ODM
//***** temporarily flag *******


#define AUTOCONF_INCLUDED
#define RTL871X_MODULE_NAME "8189ES"
#define DRV_NAME "rtl8189es"

#define CONFIG_RTL8188E
#define CONFIG_SDIO_HCI
#define PLATFORM_LINUX

#define CONFIG_IOCTL_CFG80211

#ifdef CONFIG_PLATFORM_ARM_SUNxI
	#ifndef CONFIG_IOCTL_CFG80211 
		#define CONFIG_IOCTL_CFG80211 1
	#endif
#endif

#ifdef CONFIG_PLATFORM_ARM_SUN6I
	#ifndef CONFIG_IOCTL_CFG80211 
		#define CONFIG_IOCTL_CFG80211 1
	#endif
#endif

#ifdef CONFIG_IOCTL_CFG80211
	#define RTW_USE_CFG80211_STA_EVENT /* Opne this for Android 4.1's wpa_supplicant */
	#define CONFIG_CFG80211_FORCE_COMPATIBLE_2_6_37_UNDER
	//#define CONFIG_DEBUG_CFG80211
	#define CONFIG_SET_SCAN_DENY_TIMER
#endif

#define CONFIG_EMBEDDED_FWIMG

#define CONFIG_XMIT_ACK
#define CONFIG_80211N_HT
#define CONFIG_RECV_REORDERING_CTRL

#define CONFIG_CONCURRENT_MODE
#ifdef CONFIG_CONCURRENT_MODE
	#define CONFIG_TSF_RESET_OFFLOAD		// For 2 PORT TSF SYNC.
	//#define CONFIG_HWPORT_SWAP				//Port0->Sec , Port1 -> Pri
#endif

#define CONFIG_AP_MODE
#ifdef CONFIG_AP_MODE

	#define CONFIG_INTERRUPT_BASED_TXBCN // Tx Beacon when driver early interrupt occurs	
	#if defined(CONFIG_CONCURRENT_MODE) && defined(CONFIG_INTERRUPT_BASED_TXBCN)
		#undef CONFIG_INTERRUPT_BASED_TXBCN
	#endif
	#ifdef CONFIG_INTERRUPT_BASED_TXBCN
		//#define CONFIG_INTERRUPT_BASED_TXBCN_EARLY_INT
		#define CONFIG_INTERRUPT_BASED_TXBCN_BCN_OK_ERR		
	#endif
	
	#define CONFIG_NATIVEAP_MLME
	#ifndef CONFIG_NATIVEAP_MLME
		#define CONFIG_HOSTAPD_MLME
	#endif
	//#define CONFIG_FIND_BEST_CHANNEL
	//#define CONFIG_NO_WIRELESS_HANDLERS
#endif

#define CONFIG_P2P
#ifdef CONFIG_P2P
	//The CONFIG_WFD is for supporting the Wi-Fi display
	//#define CONFIG_WFD
	
	#ifndef CONFIG_WIFI_TEST
		#define CONFIG_P2P_REMOVE_GROUP_INFO
	#endif
	#define CONFIG_DBG_P2P
	#define CONFIG_P2P_IPS
#endif

//	Added by Kurt 20110511
//#define CONFIG_TDLS
#ifdef CONFIG_TDLS
//	#ifndef CONFIG_WFD
//		#define CONFIG_WFD	1
//	#endif
//	#define CONFIG_TDLS_AUTOSETUP			1
//	#define CONFIG_TDLS_AUTOCHECKALIVE		1
#endif

#define CONFIG_SKB_COPY	//for amsdu

#define CONFIG_LAYER2_ROAMING
#define CONFIG_LAYER2_ROAMING_RESUME

#define CONFIG_LONG_DELAY_ISSUE
#define CONFIG_NEW_SIGNAL_STAT_PROCESS
#define RTW_NOTCH_FILTER 0 /* 0:Disable, 1:Enable, */

/*
 * Hardware Related Config
 */

//#define SUPPORT_HW_RFOFF_DETECTED

//#define CONFIG_SW_LED


/*
 * Interface Related Config
 */
//#define CONFIG_SDIO_TX_TASKLET
#define CONFIG_SDIO_RX_COPY
//#define CONFIG_SDIO_REDUCE_TX_POLLING


/*
 * Others
 */
//#define CONFIG_MAC_LOOPBACK_DRIVER


/*
 * Auto Config Section
 */
#if defined(CONFIG_RTL8188E) && defined(CONFIG_SDIO_HCI)
#define CONFIG_RTL8188E_SDIO 
#define CONFIG_XMIT_THREAD_MODE
#endif

#define CONFIG_IPS
#define CONFIG_LPS
#if defined(CONFIG_LPS) && defined(CONFIG_SDIO_HCI)
#define CONFIG_LPS_LCLK
#endif

#ifdef CONFIG_MAC_LOOPBACK_DRIVER
#undef CONFIG_AP_MODE
#undef CONFIG_NATIVEAP_MLME
#undef CONFIG_POWER_SAVING
#undef SUPPORT_HW_RFOFF_DETECTED
#endif

#ifdef CONFIG_MP_INCLUDED

	#define MP_DRIVER		1
	#define CONFIG_MP_IWPRIV_SUPPORT

	// disable unnecessary functions for MP
	//#undef CONFIG_IPS
	//#undef CONFIG_LPS
	//#undef CONFIG_LPS_LCLK
	//#undef SUPPORT_HW_RFOFF_DETECTED

#else// #ifdef CONFIG_MP_INCLUDED

	#define MP_DRIVER		0
	
#endif // #ifdef CONFIG_MP_INCLUDED

//#define CONFIG_IOL
#ifdef CONFIG_IOL
	#define CONFIG_IOL_READ_EFUSE_MAP
	//#define DBG_IOL_READ_EFUSE_MAP
	#define CONFIG_IOL_LLT
#endif

#define 	CONFIG_TX_AGGREGATION

//#ifdef CONFIG_PLATFORM_ARM_SUNxI
//#define CONFIG_WITS_EVB_V13
//#endif

/*
 * Outsource  Related Config
 */

#define 	RTL8192CE_SUPPORT 				0
#define 	RTL8192CU_SUPPORT 			0
#define 	RTL8192C_SUPPORT 				(RTL8192CE_SUPPORT|RTL8192CU_SUPPORT)	

#define 	RTL8192DE_SUPPORT 				0
#define 	RTL8192DU_SUPPORT 			0
#define 	RTL8192D_SUPPORT 				(RTL8192DE_SUPPORT|RTL8192DU_SUPPORT)	

#define 	RTL8723_FPGA_VERIFICATION		0
#define 	RTL8723AU_SUPPORT				0
#define 	RTL8723AS_SUPPORT				0
#define 	RTL8723AE_SUPPORT				0
#define 	RTL8723A_SUPPORT				(RTL8723AU_SUPPORT|RTL8723AS_SUPPORT|RTL8723AE_SUPPORT)

#define RTL8188EE_SUPPORT				0
#define RTL8188EU_SUPPORT				0
#define RTL8188ES_SUPPORT				1
#define RTL8188E_SUPPORT				(RTL8188EE_SUPPORT|RTL8188EU_SUPPORT|RTL8188ES_SUPPORT)
#define RTL8188E_FOR_TEST_CHIP			0
//#if (RTL8188E_SUPPORT==1)
#define RATE_ADAPTIVE_SUPPORT 			1
#define POWER_TRAINING_ACTIVE			1
//#define 	CONFIG_TX_EARLY_MODE

#ifdef CONFIG_TX_EARLY_MODE
#define	RTL8188E_EARLY_MODE_PKT_NUM_10	0
#endif
//#endif


/*
 * HAL	Related Config
 */

//for FPGA VERIFICATION config
#define RTL8188E_FPGA_TRUE_PHY_VERIFICATION 0

#define DISABLE_BB_RF	0

#if DISABLE_BB_RF
	#define HAL_MAC_ENABLE		1
	#define HAL_BB_ENABLE		0
	#define HAL_RF_ENABLE		0
#else
	#define HAL_MAC_ENABLE		1
	#define HAL_BB_ENABLE		1
	#define HAL_RF_ENABLE		1
#endif


/*
 * Debug Related Config
 */
#define DBG	1

//#define CONFIG_DEBUG /* DBG_871X, etc... */
//#define CONFIG_DEBUG_RTL871X /* RT_TRACE, RT_PRINT_DATA, _func_enter_, _func_exit_ */

//#define CONFIG_PROC_DEBUG

#define DBG_CONFIG_ERROR_DETECT
//#define DBG_CONFIG_ERROR_RESET

//#define DBG_IO
//#define DBG_DELAY_OS
//#define DBG_MEM_ALLOC
//#define DBG_IOCTL

//#define DBG_TX
//#define DBG_XMIT_BUF
//#define DBG_XMIT_BUF_EXT
//#define DBG_TX_DROP_FRAME

//#define DBG_RX_DROP_FRAME
//#define DBG_RX_SEQ
//#define DBG_RX_SIGNAL_DISPLAY_PROCESSING
//#define DBG_RX_SIGNAL_DISPLAY_SSID_MONITORED "jeff-ap"


//#define HAL_8195A_USB 0

//#define RTL8188E_FOR_MP_TEST 1

//#define DOWNLOAD_FW_TO_TXPKT_BUF 0

//#define DBG_HAL_INIT_PROFILING
