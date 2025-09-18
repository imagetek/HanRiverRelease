$action = New-ScheduledTaskAction -Execute "shutdown.exe" -Argument "/r"
$trigger = New-ScheduledTaskTrigger -Daily -At '9:00 AM' 
$settings = New-ScheduledTaskSettingsSet -RestartCount 3 -RestartInterval (New-TimeSpan -Minutes 3) -WakeToRun
Register-ScheduledTask -Action $action -Trigger $trigger -Settings $settings -TaskName "HanriverRestart" -Description "Executes command to restart pc every morning"