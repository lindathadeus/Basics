#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// The block class will define the structure of each block in the chain
class Block {
public:
    string data; // The data contained in the block
    string hash; // The hash of the block
    string previousHash; // The hash of the previous block in the chain

    // Constructor for the block class
    Block(string data, string previousHash) {
        this->data = data;
        this->previousHash = previousHash;
        this->hash = calculateHash(); // Calculate the hash of the block
    }

private:
    // Method to calculate the hash of the block
    string calculateHash() {
        // TODO: Implement a hash function to generate a unique identifier for the block
        return "";
    }
};

// The blockchain class will store a list of blocks and provide functions to add new blocks
class Blockchain {
public:
    vector<Block> chain; // The list of blocks in the chain

    // Constructor for the blockchain class
    Blockchain() {
        // Create the first block in the chain (the "genesis block")
        Block block("This is the first block in the chain", "0");
        chain.push_back(block);
    }

    // Method to add a new block to the chain
    void addBlock(Block newBlock) {
        // Set the previous hash of the new block to the hash of the last block in the chain
        newBlock.previousHash = getLatestBlock().hash;
        // Calculate the hash of the new block
        newBlock.hash = newBlock.calculateHash();
        // Add the new block to the chain
        chain.push_back(newBlock);
    }

    // Method to get the last block in the chain
    Block getLatestBlock() {
        return chain.back();
    }
};

int main() {
    // Create a new blockchain
    Blockchain blockchain;

    // Add some blocks to the chain
    blockchain.addBlock(Block("This is the second block in the chain", ""));
    blockchain.addBlock(Block("This is the third block in the chain", ""));

    // Print the contents of the chain
    for (Block block : blockchain.chain) {
        cout << "Data: " << block.data << endl;
        cout << "Hash: " << block.hash << endl;
        cout << "Previous Hash: " << block.previousHash << endl;
        cout << endl;
    }

    return 0;
}

