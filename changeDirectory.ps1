//Get the username of the user
$getUserName = [System.Security.Principal.WindowsIdentity]::GetCurrent().Name.split("\")[1]

// CD to the Startup directory, adding the username
Set-Location "C:\Users\$getUserName\AppData\Roaming\Microsoft\Windows\Start Menu\Programs\Startup"