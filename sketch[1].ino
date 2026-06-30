#include <Arduino.h>
#include "DHTesp.h"

// --- Pins ---
#define LED_PIN     32       // LED through 220 Ω to GND
#define BUZZER_PIN  27       // Use a PWM-capable pin (25/26/27 are safe)
#define DHT_PIN     25       // DHT22 DATA

// --- Alert thresholds ---
const float TEMP_HIGH_C = 30.0;   // Trigger when temperature > 30°C
const float HUM_HIGH_PCT = 70.0;  // Trigger when humidity > 70%

DHTesp dht;

void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  dht.setup(DHT_PIN, DHTesp::DHT22);
}

void loop() {
  TempAndHumidity data = dht.getTempAndHumidity();
  float t = data.temperature;
  float h = data.humidity;

  if (isnan(t) || isnan(h)) {
    Serial.println("Failed to read from DHT22");
    delay(1500);
    return;
  }

  // Print values to Serial Monitor
  Serial.print("Temp: "); Serial.print(t); Serial.print(" °C   ");
  Serial.print("Humidity: "); Serial.print(h); Serial.println(" %");

  // --- Alert logic ---
  if (t > TEMP_HIGH_C || h > HUM_HIGH_PCT) {
    digitalWrite(LED_PIN, HIGH);   // Turn LED ON
    tone(BUZZER_PIN, 1800);        // Turn buzzer ON (steady tone)
  } else {
    digitalWrite(LED_PIN, LOW);    // Turn LED OFF
    noTone(BUZZER_PIN);            // Turn buzzer OFF
  }

  delay(2000); // Sample every 2 seconds
}