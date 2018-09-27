/*
 * Copyright (C) 2018 Red Hat, Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Author: Gris Ge <fge@redhat.com>
 */

#ifndef __ISCSI_OPEN_USER_IDBM_FIELDS_H
#define __ISCSI_OPEN_USER_IDBM_FIELDS_H

/* iface fields */
#define IFACE_HWADDR		"iface.hwaddress"
#define IFACE_ISCSINAME		"iface.iscsi_ifacename"
#define IFACE_NETNAME		"iface.net_ifacename"
#define IFACE_TRANSPORTNAME	"iface.transport_name"
#define IFACE_INAME		"iface.initiatorname"
#define IFACE_ISID		"iface.isid"
#define IFACE_BOOT_PROTO	"iface.bootproto"
#define IFACE_IPADDR		"iface.ipaddress"
#define IFACE_PREFIX_LEN	"iface.prefix_len"
#define IFACE_SUBNET_MASK	"iface.subnet_mask"
#define IFACE_GATEWAY		"iface.gateway"
#define IFACE_PRIMARY_DNS	"iface.primary_dns"
#define IFACE_SEC_DNS		"iface.secondary_dns"
#define IFACE_VLAN_ID		"iface.vlan_id"
#define IFACE_VLAN_PRIORITY	"iface.vlan_priority"
#define IFACE_VLAN_STATE	"iface.vlan_state"
#define IFACE_LINKLOCAL	"iface.ipv6_linklocal"
#define IFACE_ROUTER		"iface.ipv6_router"
#define IFACE_IPV6_AUTOCFG	"iface.ipv6_autocfg"
#define IFACE_LINKLOCAL_AUTOCFG	"iface.linklocal_autocfg"
#define IFACE_ROUTER_AUTOCFG	"iface.router_autocfg"
#define IFACE_STATE		"iface.state"
#define IFACE_NUM		"iface.iface_num"
#define IFACE_MTU		"iface.mtu"
#define IFACE_PORT		"iface.port"
#define IFACE_DELAYED_ACK	"iface.delayed_ack"
#define IFACE_TCP_NAGLE		"iface.tcp_nagle"
#define IFACE_TCP_WSF_STATE	"iface.tcp_wsf_state"
#define IFACE_TCP_WSF		"iface.tcp_wsf"
#define IFACE_TCP_TIMER_SCALE	"iface.tcp_timer_scale"
#define IFACE_TCP_TIMESTAMP	"iface.tcp_timestamp"
#define IFACE_DHCP_DNS		"iface.dhcp_dns"
#define IFACE_DHCP_SLP_DA	"iface.dhcp_slp_da"
#define IFACE_TOS_STATE		"iface.tos_state"
#define IFACE_TOS		"iface.tos"
#define IFACE_GRAT_ARP		"iface.gratuitous_arp"
#define IFACE_DHCP_ALT_CID	"iface.dhcp_alt_client_id_state"
#define IFACE_DHCP_ALT_CID_STR	"iface.dhcp_alt_client_id"
#define IFACE_DHCP_REQ_VID	"iface.dhcp_req_vendor_id_state"
#define IFACE_DHCP_VID		"iface.dhcp_vendor_id_state"
#define IFACE_DHCP_VID_STR	"iface.dhcp_vendor_id"
#define IFACE_DHCP_LEARN_IQN	"iface.dhcp_learn_iqn"
#define IFACE_FRAGMENTATION	"iface.fragmentation"
#define IFACE_IN_FORWARD	"iface.incoming_forwarding"
#define IFACE_TTL		"iface.ttl"
#define IFACE_GRAT_NEIGHBOR_ADV	"iface.gratuitous_neighbor_adv"
#define IFACE_REDIRECT		"iface.redirect"
#define IFACE_IGNORE_ICMP_ECHO_REQ	"iface.ignore_icmp_echo_request"
#define IFACE_MLD		"iface.mld"
#define IFACE_FLOW_LABEL	"iface.flow_label"
#define IFACE_TRAFFIC_CLASS	"iface.traffic_class"
#define IFACE_HOP_LIMIT		"iface.hop_limit"
#define IFACE_ND_REACHABLE_TMO	"iface.nd_reachable_tmo"
#define IFACE_ND_REXMIT_TIME	"iface.nd_rexmit_time"
#define IFACE_ND_STALE_TMO	"iface.nd_stale_tmo"
#define IFACE_DUP_ADDR_DETECT_CNT	"iface.dup_addr_detect_cnt"
#define IFACE_RTR_ADV_LINK_MTU	"iface.router_adv_link_mtu"
#define IFACE_DEF_TMF_TMO	"iface.def_task_mgmt_timeout"
#define IFACE_HDRDGST		"iface.header_digest"
#define IFACE_DATADGST		"iface.data_digest"
#define IFACE_IMM_DATA		"iface.immediate_data"
#define IFACE_INITIAL_R2T	"iface.initial_r2t"
#define IFACE_DSEQ_INORDER	"iface.data_seq_inorder"
#define IFACE_DPDU_INORDER	"iface.data_pdu_inorder"
#define IFACE_ERL		"iface.erl"
#define IFACE_MAX_RECV_DLEN	"iface.max_receive_data_len"
#define IFACE_FIRST_BURST	"iface.first_burst_len"
#define IFACE_MAX_R2T		"iface.max_outstanding_r2t"
#define IFACE_MAX_BURST		"iface.max_burst_len"
#define IFACE_CHAP_AUTH		"iface.chap_auth"
#define IFACE_BIDI_CHAP		"iface.bidi_chap"
#define IFACE_STRICT_LOGIN_COMP	"iface.strict_login_compliance"
#define IFACE_DISCOVERY_AUTH	"iface.discovery_auth"
#define IFACE_DISCOVERY_LOGOUT	"iface.discovery_logout"

/* node fields */
#define NODE_NAME		"node.name"
#define NODE_TPGT		"node.tpgt"
#define NODE_STARTUP		"node.startup"
#define NODE_LEADING_LOGIN	"node.leading_login"
#define NODE_DISC_ADDR		"node.discovery_address"
#define NODE_DISC_PORT		"node.discovery_port"
#define NODE_DISC_TYPE		"node.discovery_type"
#define NODE_BOOT_LUN		"node.boot_lun"

/* session fields */
#define SESSION_INIT_CMDSN	"node.session.initial_cmdsn"
#define SESSION_INIT_LOGIN_RETRY "node.session.initial_login_retry_max"
#define SESSION_CMDS_MAX	"node.session.cmds_max"
#define SESSION_XMIT_THREAD_PRIORITY "node.session.xmit_thread_priority"
#define SESSION_QDEPTH		"node.session.queue_depth"
#define SESSION_NR_SESSIONS	"node.session.nr_sessions"
#define SESSION_AUTH_METHOD	"node.session.auth.authmethod"
#define SESSION_USERNAME	"node.session.auth.username"
#define SESSION_PASSWORD	"node.session.auth.password"
#define SESSION_PASSWORD_LEN	"node.session.auth.password_length"
#define SESSION_USERNAME_IN	"node.session.auth.username_in"
#define SESSION_PASSWORD_IN	"node.session.auth.password_in"
#define SESSION_PASSWORD_IN_LEN	"node.session.auth.password_in_length"
#define SESSION_REPLACEMENT_TMO	"node.session.timeo.replacement_timeout"
#define SESSION_ABORT_TMO	"node.session.err_timeo.abort_timeout"
#define SESSION_LU_RESET_TMO	"node.session.err_timeo.lu_reset_timeout"
#define SESSION_TGT_RESET_TMO	"node.session.err_timeo.tgt_reset_timeout"
#define SESSION_HOST_RESET_TMO	"node.session.err_timeo.host_reset_timeout"
#define SESSION_FAST_ABORT	"node.session.iscsi.FastAbort"
#define SESSION_INITIAL_R2T	"node.session.iscsi.InitialR2T"
#define SESSION_IMM_DATA	"node.session.iscsi.ImmediateData"
#define SESSION_FIRST_BURST	"node.session.iscsi.FirstBurstLength"
#define SESSION_MAX_BURST	"node.session.iscsi.MaxBurstLength"
#define SESSION_DEF_TIME2RETAIN	"node.session.iscsi.DefaultTime2Retain"
#define SESSION_DEF_TIME2WAIT	"node.session.iscsi.DefaultTime2Wait"
#define SESSION_MAX_CONNS	"node.session.iscsi.MaxConnections"
#define SESSION_MAX_R2T		"node.session.iscsi.MaxOutstandingR2T"
#define SESSION_ERL		"node.session.iscsi.ERL"
#define SESSION_SCAN		"node.session.scan"
#define SESSION_REOPEN_MAX	"node.session.reopen_max"

/* connections fields */
#define CONN_ADDR		"node.conn[0].address"
#define CONN_PORT		"node.conn[0].port"
#define CONN_STARTUP		"node.conn[0].startup"
#define CONN_WINDOW_SIZE	"node.conn[0].tcp.window_size"
#define CONN_SERVICE_TYPE	"node.conn[0].tcp.type_of_service"
#define CONN_LOGOUT_TMO		"node.conn[0].timeo.logout_timeout"
#define CONN_LOGIN_TMO		"node.conn[0].timeo.login_timeout"
#define CONN_AUTH_TMO		"node.conn[0].timeo.auth_timeout"
#define CONN_NOP_INT		"node.conn[0].timeo.noop_out_interval"
#define CONN_NOP_TMO		"node.conn[0].timeo.noop_out_timeout"
#define CONN_MAX_XMIT_DLEN	"node.conn[0].iscsi.MaxXmitDataSegmentLength"
#define CONN_MAX_RECV_DLEN	"node.conn[0].iscsi.MaxRecvDataSegmentLength"
#define CONN_HDR_DIGEST		"node.conn[0].iscsi.HeaderDigest"
#define CONN_DATA_DIGEST	"node.conn[0].iscsi.DataDigest"
#define CONN_IFMARKER		"node.conn[0].iscsi.IFMarker"
#define CONN_OFMARKER		"node.conn[0].iscsi.OFMarker"

#endif /* End of __ISCSI_OPEN_USER_IDBM_FIELDS_H */
