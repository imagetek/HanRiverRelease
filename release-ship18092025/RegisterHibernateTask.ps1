$action = New-ScheduledTaskAction -Execute "shutdown.exe" -Argument "/h"
$trigger = New-ScheduledTaskTrigger -Daily -At '5:00 PM' 
Register-ScheduledTask -Action $action -Trigger $trigger -TaskName "HanriverHibernate" -Description "Executes command to hibernate pc every evening"