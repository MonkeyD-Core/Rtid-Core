// Copyright (c) 2009-2018 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_RPC_REGISTER_H
#define BITCOIN_RPC_REGISTER_H

/** These are in one header file to avoid creating tons of single-function
 * headers for everything under src/rpc/ */
class RTIDCTable;

/** Register block chain RPC commands */
void RegisterBlockchainRPCCommands(RTIDCTable &tableRPC);
/** Register P2P networking RPC commands */
void RegisterNetRPCCommands(RTIDCTable &tableRPC);
/** Register miscellaneous RPC commands */
void RegisterMiscRPCCommands(RTIDCTable &tableRPC);
/** Register mining RPC commands */
void RegisterMiningRPCCommands(RTIDCTable &tableRPC);
/** Register raw transaction RPC commands */
void RegisterRawTransactionRPCCommands(RTIDCTable &tableRPC);

static inline void RegisterAllCoreRPCCommands(RTIDCTable &t)
{
    RegisterBlockchainRPCCommands(t);
    RegisterNetRPCCommands(t);
    RegisterMiscRPCCommands(t);
    RegisterMiningRPCCommands(t);
    RegisterRawTransactionRPCCommands(t);
}

#endif // BITCOIN_RPC_REGISTER_H
