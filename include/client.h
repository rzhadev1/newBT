#ifndef CLIENT_H
#define CLIENT_H

#include <string>
#include <fstream>
#include <stdio.h>

#include <assert.h>
#include <unistd.h>

#include "hash.h"
#include "bencode_wrapper.hpp"

namespace Client {

	static sha1sum_ctx *ctx = sha1sum_create(NULL, 0);

	// get a unique peer id string given the client ID provided. This is done in the Azureus styling.
    std::string unique_peer_id(std::string client_id);

	// hash a block
}

#endif