$location = 'C:\Users\Bart\Documents\PowerShellTest'
$fileAge = (Get-Date).AddDays(0)

Get-ChildItem -Path $location -Force | Where-Object { !$_.PSIsContainer -and $_.CreationTime -lt $fileAge } | Remove-Item -Force