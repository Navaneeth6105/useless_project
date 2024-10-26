#include <WiFi.h>
const int a=2;
const int b=4;
const int c=16;
int highRSSI=-100;
void setup() {
	Serial.begin(115200);
	pinMode(a,OUTPUT);
	pinMode(b,OUTPUT);
	pinMode(c,OUTPUT);
	Serial.println("Scanning for Wi-Fi networks...");
}

void loop() {
	int n = WiFi.scanNetworks();
	Serial.println("Scan done!");
	if (n == 0) {
		Serial.println("No networks found.");
	} else {
		highRSSI = -100;
		String highSSID = "";
		for (int i = 0; i < n; i++) {
			String ssid = WiFi.SSID(i);
			int rssi = WiFi.RSSI(i);
			if (ssid.equals("Me")) {
				highRSSI = rssi;
				Serial.println(rssi);
			}
			if(highRSSI<=0 && highRSSI>-30){
				digitalWrite(a,LOW);
				digitalWrite(b,LOW);
				digitalWrite(c,LOW);
			}
			else if(highRSSI<=-30 && highRSSI>-40){
				digitalWrite(a,LOW);
				digitalWrite(b,LOW);
				digitalWrite(c,HIGH);
			}
			else if(highRSSI<=-40 && highRSSI>-50){
				digitalWrite(a,LOW);
				digitalWrite(b,HIGH);
				digitalWrite(c,LOW);
			}
			else if(highRSSI<=-50 && highRSSI>-60){
				digitalWrite(a,LOW);
				digitalWrite(b,HIGH);
				digitalWrite(c,HIGH);
			}
			else if(highRSSI<=-60 && highRSSI>-70){
				digitalWrite(a,HIGH);
				digitalWrite(b,LOW);
				digitalWrite(c,LOW);
			}
			else if(highRSSI<=-70 && highRSSI>-80){
				digitalWrite(a,HIGH);
				digitalWrite(b,LOW);
				digitalWrite(c,HIGH);
			}
			else if(highRSSI<=-80 && highRSSI>-90){
				digitalWrite(a,HIGH);
				digitalWrite(b,HIGH);
				digitalWrite(c,LOW);
			}
			else if(highRSSI<=-90 && highRSSI>=-100){
				digitalWrite(a,HIGH);
				digitalWrite(b,HIGH);
				digitalWrite(c,HIGH);
			}
		}
	}
	delay(500);
}
