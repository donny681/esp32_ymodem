#ifndef __SPIFFS_API_H__
#define __SPIFFS_API_H__
#include <freertos/FreeRTOS.h>

#include <string.h>
#include <stdio.h>
#include <limits.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/fcntl.h>
#include <sys/dirent.h>
#include "esp_spiffs.h"
#define SPIFFS_BASE_PATH "/spiffs"

void spiffs_fs_stat(uint32_t *total, uint32_t *used);
#endif