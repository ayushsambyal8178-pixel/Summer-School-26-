<div align="center">

# **🔒 Q49 – Security Vulnerability Analysis**

*IoT Summer School 2026*

</div>

---

## **🎯 Objective**

Analyze common security vulnerabilities found in IoT applications, understand the risks associated with each vulnerability, and implement recommended security best practices to build secure IoT systems.

---

## **🛡️ Security Vulnerabilities**

| **Vulnerability** | **Security Risk** | **Recommended Solution** |
|-------------------|-------------------|--------------------------|
| **Hardcoded Wi-Fi SSID and Password** | Credentials can be extracted from source code or firmware, allowing attackers to gain unauthorized access to the network. | Store credentials in a separate `config.h` file excluded using `.gitignore`, or use secure credential storage. |
| **Using HTTP Instead of HTTPS** | Data is transmitted without encryption, making it vulnerable to eavesdropping and Man-in-the-Middle (MITM) attacks. | Use **HTTPS** with **TLS/SSL encryption** and validate server certificates. |
| **Public MQTT Broker Without Authentication** | Anyone can publish or subscribe to MQTT topics, enabling unauthorized access, spoofing, or data tampering. | Use an authenticated MQTT broker with **username/password** authentication and **TLS encryption**. |
| **No Validation of Incoming Commands** | Attackers may send malicious or unexpected commands that can cause unsafe device behavior. | Validate all incoming commands and allow only predefined, authorized commands. |
| **No Access Control or Authentication** | Devices cannot verify the identity of connected clients, increasing the risk of unauthorized control. | Implement authentication using **API keys**, **authentication tokens**, or **client certificates**. |

---

## **💻 Corrected Code Examples**

### **1️⃣ Secure Wi-Fi Credentials (`config.h`)**

### **❌ Before**

```cpp
const char* ssid = "PublicWiFi";
const char* password = "12345678";
```

### **✅ After**

```cpp
#include "config.h"

WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
```

### **config.h**

```cpp
#ifndef CONFIG_H
#define CONFIG_H

const char* WIFI_SSID = "YOUR_WIFI_NAME";
const char* WIFI_PASSWORD = "YOUR_WIFI_PASSWORD";

#endif
```

> **💡 Best Practice:** Add `config.h` to your `.gitignore` file so sensitive credentials are never uploaded to GitHub.

---

### **2️⃣ Use HTTPS Instead of HTTP**

### **❌ Before**

```cpp
HTTPClient http;
http.begin("http://example.com/api");
```

### **✅ After**

```cpp
WiFiClientSecure client;
client.setInsecure();   // For testing only

HTTPClient https;
https.begin(client, "https://example.com/api");
```

> **⚠️ Note:** `client.setInsecure()` should only be used for testing. In production, always use proper **TLS certificate validation** or **certificate pinning**.

---

## **✅ Security Best Practices**

- 🔐 Never hardcode Wi-Fi credentials in source code.
- 🌐 Always use **HTTPS** instead of HTTP.
- 📡 Secure MQTT communication using **TLS/SSL**.
- 👤 Enable authentication for users and devices.
- ✅ Validate all incoming data and commands.
- 🔑 Use strong, unique passwords and API keys.
- 🔄 Keep ESP32 firmware and libraries up to date.
- 🚫 Disable unnecessary network services and open ports.

---

## **🎯 Conclusion**

Building secure IoT applications requires protecting sensitive credentials, encrypting network communication, authenticating users and devices, and validating all incoming data.

By following these security best practices, developers can significantly reduce the risk of:

- Unauthorized access
- Data theft
- Man-in-the-Middle (MITM) attacks
- Command injection
- Device spoofing
- Malicious system control

Implementing these measures helps ensure that IoT devices remain reliable, secure, and resilient against modern cyber threats.

---

## **👨‍💻 Author**

**Name:** **AYUSH SAMBYAL**

**Course:** IoT Summer School 2026

**Question:** **Q49 – Security Vulnerability Analysis**
