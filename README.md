# Home automation

Personal home automation repo.

## Main use cases
- Measure and display room temperature & humidity using a DHT22 sensor
- Control water flow in a selfbuilt irrigation system for a DIY vertical garden
<img src="docs/irrigation_system.png" width="600"/>

## Contents:
- `home_assistant`: Home Assistant is an open-source home automation platform. Run HA in a Docker container by running `(sudo) docker-compose up -d` from the `home_assistant` directory, after which it will be accessible from your local network.
- `esp_home`: ESPhome is a framework for building custom firmware for ESP8266/ESP32 devices. The configuration files in this directory can be used to compile firmware for the usecases defined above, which can be uploaded to and run on ESP8266 devices. Check [this documentation page](https://esphome.io/guides/getting_started_command_line.html) for running the compilation process (and an optional ESPHome dashboard) in Docker. Devices flashed running ESPHome seamlessly integrate with Home Assistant when connected to the same WiFi network.
- `arduino_scripts`: This folder contains Arduino scripts for the above usecases, used for experimentation with the ESP8266 chips before integrating them with Home Assistant. These scripts, written in a variant of C++, can be uploaded to ESP chips using the Arduino IDE.
