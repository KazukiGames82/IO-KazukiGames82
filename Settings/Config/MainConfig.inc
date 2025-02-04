;----------------------------------------------------
; # # DO NOT REMOVE ANYTHING FROM THIS SECTION # # # 
;----------------------------------------------------

[Rainmeter]
Update=-1
LeftMouseDownAction=[]

[Variables]
CustomAppPosition=1

@IncludeCommunityAppMeters=#SKINSPATH#Droptop\@Resources\Meters\CommunityAppMeters.inc

;----------------------------------------------------

FlatTopShape=
HideSubMenu=[!Hide "#CURRENTCONFIG#\Folder"][!HideMeter HighlightSelected][!Redraw]

UpdateAction0=
UpdateAction1=#CloseMenu#["https://github.com/Droptop-Four/Droptop-Community-Apps/raw/main/Apps/[&MeasureAppNameURL].rmskin"]

GithubLink=["https://github.com/KazukiGames82/#MyAppID#"]
PaypalLink=["https://paypal.me/IshikawaK82"]
KofiLink=["https://ko-fi.com/kazukigames82"]
BmcLink=["https://buymeacoffee.com/kazukigames82"]

;----------------------------------------------------

IconW=((16*#DroptopSize#)-((16*#DroptopSize#)%1))
IconH=((16*#DroptopSize#)-((16*#DroptopSize#)%1))

;----------------------------------------------------

NumberOfItems=10

DividerExists1=0
DividerExists2=0
DividerExists3=0
DividerExists4=0
DividerExists5=0
DividerExists6=0
DividerExists7=0
DividerExists8=0
DividerExists9=0

CheckmarkKeyA=
CheckmarkKeyB=
CheckmarkKeyC=

;----------------------------------------------------

NumberOfBoxes=0

BoxHeight1=0
BoxHeight2=0
BoxHeight3=0
BoxHeight4=0
BoxHeight5=0

;----------------------------------------------------

ItemIsFolder1=0
ItemIsToggle1=0
ItemIsCheckmark1=0
ItemCheckmarkGroup1=
ItemCheckmarkValue1=
ItemToggleKey1=
ItemText1=Lorem Ipsum
ItemIconFileName1=blank
ItemAction1=#HideSubMenu#

ItemIsFolder2=0
ItemIsToggle2=0
ItemIsCheckmark2=0
ItemCheckmarkGroup2=
ItemCheckmarkValue2=
ItemToggleKey2=
ItemText2=Lorem Ipsum
ItemIconFileName2=blank
ItemAction2=#HideSubMenu#

ItemIsFolder3=0
ItemIsToggle3=0
ItemIsCheckmark3=0
ItemCheckmarkGroup3=
ItemCheckmarkValue3=
ItemToggleKey3=
ItemText3=Lorem Ipsum
ItemIconFileName3=blank
ItemAction3=#HideSubMenu#

ItemIsFolder4=0
ItemIsToggle4=0
ItemIsCheckmark4=0
ItemCheckmarkGroup4=
ItemCheckmarkValue4=
ItemToggleKey4=
ItemText4=Lorem Ipsum
ItemIconFileName4=blank
ItemAction4=#HideSubMenu#

ItemIsFolder5=0
ItemIsToggle5=0
ItemIsCheckmark5=0
ItemCheckmarkGroup5=
ItemCheckmarkValue5=
ItemToggleKey5=
ItemText5=Lorem Ipsum
ItemIconFileName5=blank
ItemAction5=#HideSubMenu#

ItemIsFolder6=0
ItemIsToggle6=0
ItemIsCheckmark6=0
ItemCheckmarkGroup6=
ItemCheckmarkValue6=
ItemToggleKey6=
ItemText6=Lorem Ipsum
ItemIconFileName6=blank
ItemAction6=#HideSubMenu#

ItemIsFolder7=0
ItemIsToggle7=0
ItemIsCheckmark7=0
ItemCheckmarkGroup7=
ItemCheckmarkValue7=
ItemToggleKey7=
ItemText7=Lorem Ipsum
ItemIconFileName7=blank
ItemAction7=#HideSubMenu#

ItemIsFolder8=0
ItemIsToggle8=0
ItemIsCheckmark8=0
ItemCheckmarkGroup8=
ItemCheckmarkValue8=
ItemToggleKey8=
ItemText8=Lorem Ipsum
ItemIconFileName8=blank
ItemAction8=#HideSubMenu#

ItemIsFolder9=0
ItemIsToggle9=0
ItemIsCheckmark9=0
ItemCheckmarkGroup9=
ItemCheckmarkValue9=
ItemToggleKey9=
ItemText9=Lorem Ipsum
ItemIconFileName9=blank
ItemAction9=#HideSubMenu#

ItemIsFolder10=0
ItemIsToggle10=0
ItemIsCheckmark10=0
ItemCheckmarkGroup10=
ItemCheckmarkValue10=
ItemToggleKey10=
ItemText10=Lorem Ipsum
ItemIconFileName10=blank
ItemAction10=#HideSubMenu#

;-----------------------------------------

[HotInput]
Measure=
Plugin=

[InputHandler]
Measure=
Script=

;-----------------------------------------

;----------------------------------------------------
; # # BEGIN EDITING BELOW # # # # # # # # # # # # # #
;----------------------------------------------------

[InfoStyle]

    [InfoStyle___Center]
    StringAlign=CenterCenter
    Padding=#DropdownNoIconPadding#,#DropdownItemPaddingY#,#DropdownNoIconPadding#,(#DropdownItemPaddingY#*-1)
    FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#/1.25)
    X=(#SysAppMenuXOffset#+(#DropdownMenuWidth#+#DropdownMenuWidthOffset#+2)/2)
    W=((#DropdownMenuWidth#+#DropdownMenuWidthOffset#+2)-#DropdownNoIconPadding#*2)
    MouseOverAction=
    MouseLeaveAction=

    [InfoStyle___Right]
    StringAlign=RightCenter
    FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#/1.25)
    Padding=#DropdownNoIconPadding#,#DropdownItemPaddingY#,#DropdownItemPadding1#,(#DropdownItemPaddingY#*-1)
    X=(#SysAppMenuXOffset#+(#DropdownMenuWidth#+#DropdownMenuWidthOffset#+2))
    W=((#DropdownMenuWidth#+#DropdownMenuWidthOffset#+2)-#DropdownNoIconPadding#-#DropdownItemPadding1#)
    MouseOverAction=
    MouseLeaveAction=

[IconStyle]
    
    [IconStyle___Funding]
    ImageName=#ItemIconPath##CURRENTSECTION#.png
    X=R
    Y=r
    ImageAlpha=(#DropdownItemOpacity#/1.5)
    LeftMouseDownAction=#CloseMenu#[#[#CURRENTSECTION]Link]
    MouseOverAction=[!SetOption #CURRENTSECTION# ImageAlpha "#DropdownItemOpacity#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
    MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageAlpha ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
    Hidden=0

[ArrowStyleB]

[BoxStyle]

[TextStyle]

;-----------------------------------------

[1]
MeterStyle=#DefaultMeterStyle#

[2]
MeterStyle=#DefaultMeterStyle#

[3]
MeterStyle=#DefaultMeterStyle#

[4]
MeterStyle=#DefaultMeterStyle#

[5]
MeterStyle=#DefaultMeterStyle#

[6]
MeterStyle=#DefaultMeterStyle#

[7]
MeterStyle=#DefaultMeterStyle#

[8]
MeterStyle=#DefaultMeterStyle#

[9]
MeterStyle=#DefaultMeterStyle#

[10]
MeterStyle=#DefaultMeterStyle#

;-----------------------------------------

[1Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[2Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[3Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[4Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[5Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[6Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[7Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[8Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[9Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[10Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

;-----------------------------------------

[1Arrow]
MeterStyle=ArrowStyleB

[2Arrow]
MeterStyle=ArrowStyleB

[3Arrow]
MeterStyle=ArrowStyleB

[4Arrow]
MeterStyle=ArrowStyleB

[5Arrow]
MeterStyle=ArrowStyleB

[6Arrow]
MeterStyle=ArrowStyleB

[7Arrow]
MeterStyle=ArrowStyleB

[8Arrow]
MeterStyle=ArrowStyleB

[9Arrow]
MeterStyle=ArrowStyleB

[10Arrow]
MeterStyle=ArrowStyleB

;-----------------------------------------

[DividerStyle]
Shape=#DividerShape#
Y=(#NumberOfItems#>[##CURRENTSECTION#]?([[##CURRENTSECTION#]:Y]+#DropdownItemHeight#+#DividerSpace#):0)
Hidden=(#NumberOfItems#>[##CURRENTSECTION#]?(([#DividerExists[##CURRENTSECTION#]]-1)*-1):1)
; Container=AnimationContainer
DynamicVariables=1

[Divider1]
Meter=Shape
MeterStyle=DividerStyle

[Divider2]
Meter=Shape
MeterStyle=DividerStyle

[Divider3]
Meter=Shape
MeterStyle=DividerStyle

[Divider4]
Meter=Shape
MeterStyle=DividerStyle

[Divider5]
Meter=Shape
MeterStyle=DividerStyle

[Divider6]
Meter=Shape
MeterStyle=DividerStyle

[Divider7]
Meter=Shape
MeterStyle=DividerStyle

[Divider8]
Meter=Shape
MeterStyle=DividerStyle

[Divider9]
Meter=Shape
MeterStyle=DividerStyle

;-----------------------------------------

[Github]
Meter=Image
MeterStyle=IconStyle | IconStyle___Funding
X=(#DropdownIconXoffset#+#SysAppMenuXOffset#)
Y=[#NumberOfItems#:Y]

[Line]
Meter=Image
MeterStyle=IconStyle | IconStyle___Funding
LeftMouseDownAction=
MouseOverAction=
MouseLeaveAction=
PreserveAspectRatio=2
W=(#IconW#/8)

[Paypal]
Meter=Image
MeterStyle=IconStyle | IconStyle___Funding

[Kofi]
Meter=Image
MeterStyle=IconStyle | IconStyle___Funding

[Bmc]
Meter=Image
MeterStyle=IconStyle | IconStyle___Funding
