#ifndef BITMAN_H
#define BITMAN_H

#include <bitman/internal/bitstream.h>

// Initialize the database
int bitman_init(const char *db_path);

// Create bitstream table
int bitman_create_bitstream_table(void);

// Get last flashed bitstream
int bitman_query_bitstream(char* filename);

// Flash a bitstream
int bitman_flash_bitstream(char* bitstream);

// Update bitstream for query
void bitman_update_bitstream_info(char* bitstream);

// Close the database
void bitman_close();

// Add a bitstream
int bitman_add_bitstream(int file_descriptor, const char *name, const char *description, Bitstream *bitstream);

// Remove a bitstream
int bitman_remove_bitstream(int id);

// Update a bitstream
int bitman_update_bitstream(const Bitstream *bitstream);

// Get bitstream location by name
int bitman_get_bitstream_location(const char *name, char *filepath);

// Get total bitstream count
int bitman_get_total_bitstream_count(void);

// Get bitstream count by name
int bitman_get_bitstream_count_by_name(const char* name);

// Search for bitstreams by name
int bitman_search_bitstream(const char *name, Bitstream *bitstreams);

// List all bitstreams
int bitman_list_bitstreams(Bitstream *bitstreams);

#endif // BITMAN_H
