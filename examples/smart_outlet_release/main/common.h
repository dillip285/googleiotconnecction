/* Mesh Internal Communication Example

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/

#ifndef __MESH_MAIN_H__
#define __MESH_MAIN_H__
#define CONFIG_MESH_TOPO_TREE y
#define CONFIG_MESH_TOPOLOGY 0
#define CONFIG_MESH_ENABLE_PS y
#define CONFIG_MESH_PS_DEV_DUTY_TYPE_REQUEST y
#define CONFIG_MESH_PS_DEV_DUTY_TYPE 1
#define CONFIG_MESH_PS_DEV_DUTY 12
#define CONFIG_MESH_PS_NWK_DUTY 12
#define CONFIG_MESH_PS_NWK_DUTY_DURATION -1
#define CONFIG_MESH_PS_NETWORK_DUTY_APPLIED_ENTIRE y
#define CONFIG_MESH_PS_NWK_DUTY_RULE 0
#define CONFIG_MESH_MAX_LAYER 6
#define CONFIG_MESH_CHANNEL 0
#define CONFIG_MESH_ROUTER_SSID "00000706"
#define CONFIG_MESH_ROUTER_PASSWD "Ortel@123"
#define CONFIG_WIFI_AUTH_WPA2_PSK y
#define CONFIG_MESH_AP_AUTHMODE 3
#define CONFIG_MESH_AP_PASSWD "MAP_PASSWD"
#define CONFIG_MESH_AP_CONNECTIONS  6
#define CONFIG_MESH_ROUTE_TABLE_SIZE 50
int ROOT_NOTE; 
void wifi_main_init(void);
void google_iot_task();
void google_mqtt_task();
static void wifi_init(void);
/*Data will send to Google IOT Platform*/
int temp;
#endif /* __MESH_MAIN_H__ */
