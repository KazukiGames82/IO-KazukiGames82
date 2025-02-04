;----------------------------------------------------
; # # DO NOT REMOVE ANYTHING FROM THIS SECTION # # # 
;----------------------------------------------------

[Rainmeter]
Update=-1
LeftMouseDownAction=[]

[Variables]
CustomAppPosition=1

FolderNumber=2

@IncludeCommunityAppSubMenuMeters=#SKINSPATH#Droptop\@Resources\Meters\CommunityAppSubMenuMeters.inc

;----------------------------------------------------

FlatTopShape=
HideSubMenu=[!Hide][!HideMeter HighlightSelected "#MyAppLoc#"][!Redraw "#MyAppLoc#"]

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

ItemIsToggle1=0
ItemIsCheckmark1=0
ItemCheckmarkGroup1=
ItemCheckmarkValue1=
ItemToggleKey1=
ItemText1=Lorem Ipsum
ItemIconFileName1=blank
ItemAction1=#HideSubMenu#

ItemIsToggle2=0
ItemIsCheckmark2=0
ItemCheckmarkGroup2=
ItemCheckmarkValue2=
ItemToggleKey2=
ItemText2=Lorem Ipsum
ItemIconFileName2=blank
ItemAction2=#HideSubMenu#

ItemIsToggle3=0
ItemIsCheckmark3=0
ItemCheckmarkGroup3=
ItemCheckmarkValue3=
ItemToggleKey3=
ItemText3=Lorem Ipsum
ItemIconFileName3=blank
ItemAction3=#HideSubMenu#

ItemIsToggle4=0
ItemIsCheckmark4=0
ItemCheckmarkGroup4=
ItemCheckmarkValue4=
ItemToggleKey4=
ItemText4=Lorem Ipsum
ItemIconFileName4=blank
ItemAction4=#HideSubMenu#

ItemIsToggle5=0
ItemIsCheckmark5=0
ItemCheckmarkGroup5=
ItemCheckmarkValue5=
ItemToggleKey5=
ItemText5=Lorem Ipsum
ItemIconFileName5=blank
ItemAction5=#HideSubMenu#

ItemIsToggle6=0
ItemIsCheckmark6=0
ItemCheckmarkGroup6=
ItemCheckmarkValue6=
ItemToggleKey6=
ItemText6=Lorem Ipsum
ItemIconFileName6=blank
ItemAction6=#HideSubMenu#

ItemIsToggle7=0
ItemIsCheckmark7=0
ItemCheckmarkGroup7=
ItemCheckmarkValue7=
ItemToggleKey7=
ItemText7=Lorem Ipsum
ItemIconFileName7=blank
ItemAction7=#HideSubMenu#

ItemIsToggle8=0
ItemIsCheckmark8=0
ItemCheckmarkGroup8=
ItemCheckmarkValue8=
ItemToggleKey8=
ItemText8=Lorem Ipsum
ItemIconFileName8=blank
ItemAction8=#HideSubMenu#

ItemIsToggle9=0
ItemIsCheckmark9=0
ItemCheckmarkGroup9=
ItemCheckmarkValue9=
ItemToggleKey9=
ItemText9=Lorem Ipsum
ItemIconFileName9=blank
ItemAction9=#HideSubMenu#

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
LeftMouseDownAction=#Action0#

    [InfoStyle___Center]
    StringAlign=CenterCenter
    Padding=#DropdownNoIconPadding#,#DropdownItemPaddingY#,#DropdownNoIconPadding#,(#DropdownItemPaddingY#*-1)
    FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#/1.25)
    X=(#SysAppMenuXOffset#+(#DropdownMenuWidth#+#DropdownMenuWidthOffset#+2)/2)
    W=((#DropdownMenuWidth#+#DropdownMenuWidthOffset#+2)-#DropdownNoIconPadding#*2)
    MouseOverAction=
    MouseLeaveAction=

[IconStyle]

[ArrowStyleB]
Hidden=1

[Background]
Shape2=

[HighlightBackground]

[HighlightSelected]

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

[DividerStyle]
Shape=#DividerShapeSub#
Y=(#NumberOfItems#>[##CURRENTSECTION#]?([[##CURRENTSECTION#]:Y]+#DropdownItemHeight#+#DividerSpace#):0)
Hidden=(#NumberOfItems#>[##CURRENTSECTION#]?(([#DividerExists[##CURRENTSECTION#]]-1)*-1):1)
Container=AnimationContainer
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
