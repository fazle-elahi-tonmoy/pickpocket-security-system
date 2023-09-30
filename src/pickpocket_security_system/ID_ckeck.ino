int getFingerprintID() {
  uint8_t p = finger.getImage();
  switch (p) {
    case 0:
      Serial.println("Image taken");
      break;
    case 2:
      finger.LEDcontrol(FINGERPRINT_LED_OFF, 0, FINGERPRINT_LED_BLUE);
      finger.LEDcontrol(FINGERPRINT_LED_OFF, 0, FINGERPRINT_LED_RED);
    default:
      return -1;
  }


  p = finger.image2Tz();
  if (p) return -1;

  p = finger.fingerSearch();
  if (p) return -1;
  else {
    finger.LEDcontrol(FINGERPRINT_LED_FLASHING, 25, FINGERPRINT_LED_PURPLE, 10);
    delay(200);
  }
  return finger.fingerID;
}

int getFingerprintIDez() {
  uint8_t p = finger.getImage();
  if (p) return -1;
  p = finger.image2Tz();
  if (p) return -1;
  p = finger.fingerFastSearch();
  if (p) return -1;
  return finger.fingerID;
}