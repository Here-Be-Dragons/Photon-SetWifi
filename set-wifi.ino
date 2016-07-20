/* These credentials will be added to the device's memory,
* and the device will automatically attempt to connect to
* this network in the future.
* Core: remembers the 7 most recently set credentials
* Photon: remembers the 5 most recently set credentials
*/

void setup() {
WiFi.on()
// Connects to an unsecured network.
WiFi.setCredentials("<SSID>");

// Connects to a network secured with WPA2 credentials.
WiFi.setCredentials("<SSID>", "<PASSWORD>");

// Connects to a network with a specified authentication procedure.
// Options are WPA2, WPA, or WEP.
WiFi.setCredentials("<SSID>", "<PASSWORD>", WEP);
}

// for hidden and offline networks on the Photon, the security cipher is also needed
// Cipher options are WLAN_CIPHER_AES, WLAN_CIPHER_TKIP and WLAN_CIPHER_AES_TKIP
WiFi.setCredentials("<SSID>", "<PASSWORD>", WPA2, WLAN_CIPHER_AES));

void loop() {

}
