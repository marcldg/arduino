//Libraries
#include <DHT.h>

//Constants
#define DHTPIN 2     // These will define what pin we're connected to
#define DHTTYPE DHT22   // DHT 22  (AM2302)
DHT dht(DHTPIN, DHTTYPE); // Initialize DHT sensor for normal 16mhz Arduino

//Variables
float hum;  //Stores humidity value
float temp; //Stores temperature value

void setup()
{
    Serial.begin(9600);
    dht.begin();
    pinMode(3, INPUT);
    pinMode(7, OUTPUT); // Setting up Pin N0 7 to work as a 5V supply.
}

void loop()
{
    //Read data and store it to variables hum and temp
    hum = dht.readHumidity();
    temp= dht.readTemperature();
    
    //Print temp and humidity values to serial monitor
    Serial.print("Humidity: ");
    Serial.print(hum);
    Serial.print(" %, Temp: ");
    Serial.print(temp);
    Serial.println(" Celsius");
    delay(2000); //Delay 2 sec.

    // Instructions to pinNo7 to act as a 5V output
    digitalWrite(7, HIGH);
    
    if (digitalRead(3) == HIGH) 
    {
      Serial.println("Active");
    }
    else 
    {
      Serial.println("Inactive");
    }
    delay(2000); //Delay 2 sec. 
}
