#pragma once

#include <iostream>

struct Wallet {
    int septims;
};

Wallet* createWallet(int amount);
void destroyWallet(Wallet* wallet);
Wallet* createWallets(int amount);
void destroyWallets(Wallet* wallets);


