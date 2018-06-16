#ifndef QTIPCSERVER_H
#define QTIPCSERVER_H

// Define TierMasternodeCoin-Qt message queue name
#define BITCOINURI_QUEUE_NAME "TierMasternodeCoinURI"

void ipcScanRelay(int argc, char *argv[]);
void ipcInit(int argc, char *argv[]);

#endif // QTIPCSERVER_H
