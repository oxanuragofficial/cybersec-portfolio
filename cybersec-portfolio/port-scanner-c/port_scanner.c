#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#pragma comment(lib, "ws2_32.lib")

int main() {
    WSADATA wsa;
    char *ip = "127.0.0.1"; // Change to target IP
    int port;
    struct sockaddr_in addr;

    if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0) {
        printf("WSAStartup failed\n");
        return 1;
    }

    printf("Scanning ports on %s...\n", ip);

    for (port = 1; port <= 1024; port++) {
        SOCKET sock = socket(AF_INET, SOCK_STREAM, 0);
        addr.sin_family = AF_INET;
        addr.sin_port = htons(port);
        addr.sin_addr.s_addr = inet_addr(ip);

        if (connect(sock, (struct sockaddr *)&addr, sizeof(addr)) == 0) {
            printf("Port %d is OPEN\n", port);
        }
        closesocket(sock);
    }

    WSACleanup();
    return 0;
}
