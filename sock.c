#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <sys/ioctl.h>
#include <netpacket/packet.h>
#include <netinet/ip.h>
#include <netinet/ip_icmp.h>
#include <netinet/if_ether.h>
#include <linux/if.h>
#include <arpa/inet.h>
#include "sock.h"
#include "param.h"

u_int16_t checksum(u_int8_t *data, int len)
{
}

u_int16_t checksum2(u_int8_t *data1, int len1, u_int8_t *data2, int len2)
{
}

int GetMacAddress(char *device, u_int8_t *hwaddr)
{
}

int DummyWait(int ms)
{
}

int init_socket(char *device)
{
}
