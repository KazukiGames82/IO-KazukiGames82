[Variables]
IO-KazukiGames82.LeftMouseDownAction=[]
IO-KazukiGames82.MouseOverAction=[]
IO-KazukiGames82.MouseLeaveAction=[]
IO-KazukiGames82.ButtonAction=[]

[IO-KazukiGames82.Style]
W=((((#TopHeight#+#TopBarIconHOffset#)*1.5))-((((#TopHeight#+#TopBarIconHOffset#)*1.5)%1)))

[IO-KazukiGames82]
Meter=Image
MeterStyle=InfoStyle | CustomAppModifierStyle
SolidColor=0,0,0,0
; LeftMouseDownAction=#HideAll##SetCustomAppPosition#[!UpdateMeasure AutoStartup "Droptop Community Apps\Apps\IO-KazukiGames82"][!ActivateConfig "Droptop Community Apps\Apps\IO-KazukiGames82" "CustomApp.ini"]
LeftMouseDownAction=[!EnableMouseAction * "*"][!SetVariable ActiveAll 0 ][!SetVariable ActiveTray 0 ][!SetVariable ActiveFolder 0 ][!SetVariable ActiveAll 0][!SetVariable ActiveTray 0][!SetVariable ActiveFolder 0][#PowerMenuActionTimer[#PowerMenuLoadState]][!HideFadeGroup Folders][!HideFadeGroup Tray][!HideFadeGroup ContextBox][!HideMeterGroup HighlightSelected ][!HideMeterGroup HighlightSelected][!WriteKeyValue Variables CustomAppPosition [#CustomApp[#IO-KazukiGames82]Num] "#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID[#IO-KazukiGames82]]\Config\MainConfig.inc"][!WriteKeyValue Variables CustomAppPosition [#CustomApp[#IO-KazukiGames82]Num] "#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID[#IO-KazukiGames82]]\Folder\Config\FolderConfig.inc"][!WriteKeyValue Variables CustomAppPosition [#CustomApp[#IO-KazukiGames82]Num] "#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID[#IO-KazukiGames82]]\Settings\Config\MainConfig.inc"][!WriteKeyValue Variables CustomAppPosition [#CustomApp[#IO-KazukiGames82]Num] "#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID[#IO-KazukiGames82]]\Settings\Folder\Config\FolderConfig.inc"][!ActivateConfig "Droptop Community Apps\Apps\IO-KazukiGames82" "CustomApp.ini"]
RightMouseUpAction=[!DeactivateConfig "Droptop Community Apps\Apps\IO-KazukiGames82"]
MouseOverAction=[!Delay 10][!SetOption MeasureActionTimer Click1B[&mItemSubFolderID] """[]"""][!UpdateMeasure MeasureActionTimer][!UpdateMeasure mItemSubFolderID]
