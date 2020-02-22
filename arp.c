#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <netinet/ip_icmp.h>
#include <netinet/if_ether.h>
#include <arpa/inet.h>
#include <pthread.h>
#include <sys/types.h>
#include "sock.h"
#include "ether.h"
#include "arp.h"
#include "param.h"

extern PARAM Param;

#define ARP_TABLE_NO (16)

typedef struct
{
  time_t timestamp;
  u_int8_t mac[6];
  struct in_addr ipaddr;
} ARP_TABLE;

ARP_TABLE ArpTable[ARP_TABLE_NO];

pthread_rwlock_t ArpTableLock = PTHREAD_RWLOCK_INITIALIZER;

char *my_arp_ip_ntoa_r(u_int8_t ip[4], char *buf)
{
}

void print_ether_arp(struct ether_arp *ether_arp)
{
}

int ArpAddTable(u_int8_t mac[6], struct in_addr *ipaddr)
{
}

int ArpDelTable(struct in_addr *ipaddr)
{
}

int ArpSearchTable(struct in_addr *ipaddr, u_int8_t mac[6])
{
}

int ArpShowTable()
{
}

int GetTargetMac(int soc, struct in_addr *daddr, u_int8_t dmac[6], int gratuitous)
{
}

int ArpSend(int soc, u_int16_t op, u_int8_t e_smac[6], u_int8_t e_dmac[6], u_int8_t smac[6], u_int8_t dmac[6], u_int8_t saddr[4], u_int8_t daddr[4])
{
}

int ArpSendRequestGratuitous(int soc, struct in_addr *targetIp)
{
}

int ArpSendRequest(int soc, struct in_addr *targetIp)
{
}

int ArpCheckGArp(int soc)
{
}

int ArpRecv(int soc, struct ether_header *eh, u_int8_t *data, int len)
{
}
