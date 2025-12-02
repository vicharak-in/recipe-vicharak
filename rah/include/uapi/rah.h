#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Send a buffer to the FPGA for a specific application
 * @param appid: The application ID
 * @param message: The message to send
 * @param len: The length of the message
 */
int rah_write(const uint8_t appid, const char* message,
		const unsigned long len);

/*
 * Read a buffer from the FPGA for a specific application
 * @param appid: The application ID
 * @param message: The message to read
 * @param len: The length of the message
 */
int rah_read(const uint8_t appid, char *message,
		const unsigned long len);

/*
 * Clear the buffer for a specific application
 * @param appid: The application ID
 */
int rah_clear_buffer(const uint8_t appid);

/*
 * Request memory for a specific application
 * @param appid: The application ID
 * @param len: The length of the memory to request
 */
void *rah_request_mem(const uint8_t appid, const unsigned long len);

/*
 * Write to memory for a specific application
 * @param appid: The application ID
 * @param ptr: The pointer to the memory
 * @param len: The length of the memory to write
 */
int rah_write_mem(const uint8_t appid, void* ptr, const unsigned long len);

/*
 * Free memory for a specific application
 * @param ptr: The pointer to the memory
 */
void rah_free_mem(void* ptr);

/*
 * Get maximum buffer size
 */
unsigned long rah_max_buffer_size(void);


/*
 * Match rah version with the FPGA
 */
int rah_check_version_compatible(void);

#ifdef __cplusplus
}
#endif
