import time

password = "secure123"
attempts = ["123456", "password", "secure123", "admin"]

for attempt in attempts:
    print(f"Trying: {attempt}")
    time.sleep(1)  # Simulate delay
    if attempt == password:
        print("Password found!")
        break
