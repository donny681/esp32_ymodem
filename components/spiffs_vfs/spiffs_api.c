#include "spiffs_api.h"
//----------------------------------------------------
void spiffs_fs_stat(uint32_t *total, uint32_t *used) {
	if (esp_spiffs_info(NULL, total, used) != ESP_OK ) {
		*total = 0;
		*used = 0;
	}
}