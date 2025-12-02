#ifndef BITSTREAM_H
#define BITSTREAM_H

#define BITSTREAM_NAME_LEN 256
#define BITSTREAM_FILEPATH_LEN 512
#define BITSTREAM_DESCRIPTION_LEN 1024

#define BITSTREAM_SUCCESS 0
#define BITSTREAM_ERR_DB -1
#define BITSTREAM_ERR_NOT_FOUND -2

typedef struct {
	int id;
	char name[BITSTREAM_NAME_LEN];
	char filepath[BITSTREAM_FILEPATH_LEN];
	char description[BITSTREAM_DESCRIPTION_LEN];
} Bitstream;

int create_bitstream_table();
int add_bitstream(const char *name, const char *filepath, const char *description);
int remove_bitstream(int id);
int update_bitstream(const Bitstream *bitstream);
int get_bitstream_location(const char *name, char *filepath);
int count_total_bitstreams(void);
int count_bitstreams_by_name(const char *name);
int search_bitstream(const char *name, Bitstream *bitstreams);
int list_bitstreams(Bitstream *bitstreams);
int get_last_inserted_bitstream_id(int *last_id);
int get_bitstream_location_by_id(int id, char *filepath);

#endif // BITSTREAM_H
