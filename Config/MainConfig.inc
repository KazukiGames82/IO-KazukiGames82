;----------------------------------------------------
; # # DO NOT REMOVE ANYTHING FROM THIS SECTION # # # 
;----------------------------------------------------

[Rainmeter]
Update=-1
LeftMouseDownAction=[]

[Variables]
CustomAppPosition=1
CurrentSubFolder=1

@IncludeCommunityAppMeters=#SKINSPATH#Droptop\@Resources\Meters\CommunityAppMeters.inc

;----------------------------------------------------

HideSubMenu=[!Hide "#CURRENTCONFIG#\Folder"][!HideMeter HighlightSelected][!Redraw]

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

Box1=1
Box2=2
Box3=3
Box4=4
Box5=5
Box6=6

Box1Icon=1
Box2Icon=2
Box3Icon=3
Box4Icon=4
Box5Icon=5
Box6Icon=6

Box1Text=1
Box2Text=2
Box3Text=3
Box4Text=4
Box5Text=5
Box6Text=6

BoxPosition1=0
BoxPosition2=1
BoxPosition3=2
BoxPosition4=3
BoxPosition5=4
BoxPosition6=5

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

[MeasureCheckmark0]
Measure=
String=
Substitute=
OnChangeAction=
OnUpdateAction=

[MeasureCheckmarkA]
Measure=
String=
Substitute=
OnChangeAction=
OnUpdateAction=

[MeasureCheckmarkB]
Measure=
String=
Substitute=
OnChangeAction=
OnUpdateAction=

[MeasureCheckmarkC]
Measure=
String=
Substitute=
OnChangeAction=
OnUpdateAction=

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

[IconStyle]

[ArrowStyleB]

[BoxStyle]
Shape=Rectangle #DropdownMenuCutout#,#DropdownMenuCutout#,(#DropdownMenuWidth#-(#DropdownMenuCutout#*2)),(#DropdownMenuHeight#-(#DropdownMenuCutout#*2)),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#ForceOpaque#=1?255:(#DropdownMenuOpacity1#<1?1:((#DropdownMenuOpacity1#*(#DropdownMenuBlur#=1?[#MicaEnabled[#UseMicaBlur][#Win10Apps]]:1))+1))) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#
Shape2=Rectangle #DropdownMenuCutout#,#DropdownMenuCutout#,(#DropdownMenuWidth#-(#DropdownMenuCutout#*2)),(#DropdownMenuHeight#-(#DropdownMenuCutout#*2)),#DropdownBGCorner# | Extend HLColor
Shape3=
X=(([#ScreenAreaWIDTH]/2-(([#CURRENTSECTION#:W]*#NumberOfColums#+(#NumberOfGapX#*(#NumberOfColums#-1))))/2)+((([##CURRENTSECTION#]-1)%#NumberOfColums#)*(#DropdownMenuWidth#+#NumberOfGapX#)))
Y=(([#ScreenAreaHEIGHT]/2-(([#CURRENTSECTION#:H]*#NumberOfRows#)+(#NumberOfGapY#*(#NumberOfRows#-1)))/2)+((Floor(([##CURRENTSECTION#]-1)/#NumberOfColums#))*(#DropdownMenuHeight#+#NumberOfGapY#)))
LeftMouseDownAction=[#BoxAction[##CURRENTSECTION#][#BoxConfirmAction[##CURRENTSECTION#]]]
MouseOverAction=[!SetVariable BoxHover[##CURRENTSECTION#] 1][!SetVariable ActionTimer.HLFadeIn 0.2][!SetOption #CURRENTSECTION# HLColor """Fill Color #*DropdownItemHL*#,((#DropdownHLOpacity#/#HighlightShapeOpacityDivisor1B#)*#*ActionTimer.HLFadeIn*#) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #*DropdownStrokeColor*#,(#*DropdownStrokeOpacity*#*#*ActionTimer.HLFadeIn*#)"""][!SetOptionGroup BoxIcons ImageAlpha "55"][!SetOptionGroup Box[##CURRENTSECTION#] FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOptionGroup Box[##CURRENTSECTION#] ImageTint "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOptionGroup Box[##CURRENTSECTION#] ImageAlpha ""][!UpdateMeterGroup Box[##CURRENTSECTION#]][!UpdateMeterGroup BoxIcons][!UpdateMeterGroup BoxText][!Redraw][!CommandMeasure MeasureActionTimer "Execute 2"]
MouseLeaveAction=[!CommandMeasure MeasureActionTimer "Stop 2"]#ResetConfirmAction#[!SetVariable BoxHover[##CURRENTSECTION#] 0][!SetOptionGroup BoxIcons ImageAlpha ""][!SetOption #CURRENTSECTION# HLColor """Fill Color #*DropdownItemHL*#,0 | StrokeWidth 0"""][!SetOptionGroup Box[##CURRENTSECTION#] FontColor ""][!SetOptionGroup Box[##CURRENTSECTION#] ImageTint ""][!UpdateMeterGroup Box[##CURRENTSECTION#]][!UpdateMeterGroup BoxIcons][!UpdateMeterGroup BoxText][!Redraw]

[BoxIconStyle]
ImageName=#ItemIconPath#\[#BoxIconFileName[##CURRENTSECTION#]].png
ImageTint=#DropdownFontColor1#,#DropdownItemOpacity#
ImageAlpha=#DropdownItemOpacity#
Greyscale=#DropdownIconGreyscale#
LeftMouseDownAction=
MouseOverAction=
MouseLeaveAction=
Padding=
X=([Box[##CURRENTSECTION#]:X]+[Box[##CURRENTSECTION#]:W]/2-[#CURRENTSECTION#:W]/2)
Y=([Box[##CURRENTSECTION#]:Y]+[Box[##CURRENTSECTION#]:H]/2-[#CURRENTSECTION#:H]/([#BoxHover[##CURRENTSECTION#]]=1?1.5:2))
W=([Box[##CURRENTSECTION#]:W]/3)
H=([Box[##CURRENTSECTION#]:W]/3)
PreserveAspectRatio=2
DynamicVariables=1
UpdateDivider=-1
Hidden=(#NumberOfBoxes#>=[##CURRENTSECTION#]?0:1)
Group=BoxIcons | Box[##CURRENTSECTION#]

[BoxTextStyle]
StringAlign=CenterBottom
Text=[#BoxText[##CURRENTSECTION#]]
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#*[#BoxHover[##CURRENTSECTION#]])
Padding=
LeftMouseDownAction=
MouseOverAction=
MouseLeaveAction=
FontSize=([Box[##CURRENTSECTION#]:H]/12)
X=([Box[##CURRENTSECTION#]:X]+[Box[##CURRENTSECTION#]:W]/2)
Y=([Box[##CURRENTSECTION#]:Y]+[Box[##CURRENTSECTION#]:H]/2+[#CURRENTSECTION#:H]/2.75)
W=([Box[##CURRENTSECTION#]:W])
H=([Box[##CURRENTSECTION#]:H])
ClipString=1
Hidden=(#NumberOfBoxes#>=[##CURRENTSECTION#]?0:1)
Group=BoxText | Box[##CURRENTSECTION#]

[TextStyle]

;-----------------------------------------

[1]

[2]
Meter=

[3]
Meter=

[4]
Meter=

[5]
Meter=

[6]
Meter=

[7]
Meter=

[8]
Meter=

[9]
Meter=

[10]
Meter=

;-----------------------------------------

[1Icon]
Meter=

[2Icon]
Meter=

[3Icon]
Meter=

[4Icon]
Meter=

[5Icon]
Meter=

[6Icon]
Meter=

[7Icon]
Meter=

[8Icon]
Meter=

[9Icon]
Meter=

[10Icon]
Meter=

;-----------------------------------------

[1Arrow]
Meter=

[2Arrow]
Meter=

[3Arrow]
Meter=

[4Arrow]
Meter=

[5Arrow]
Meter=

[6Arrow]
Meter=

[7Arrow]
Meter=

[8Arrow]
Meter=

[9Arrow]
Meter=

[10Arrow]
Meter=

;----------------------------------------------------

[Box1]
MeterStyle=BoxStyle

[Box2]
MeterStyle=BoxStyle

[Box3]
MeterStyle=BoxStyle

[Box4]
MeterStyle=BoxStyle

[Box5]
MeterStyle=BoxStyle

[Box6]
Meter=Shape
MeterStyle=BoxStyle

[Box1Icon]
Meter=Image
MeterStyle=BoxIconStyle

[Box2Icon]
Meter=Image
MeterStyle=BoxIconStyle

[Box3Icon]
Meter=Image
MeterStyle=BoxIconStyle

[Box4Icon]
Meter=Image
MeterStyle=BoxIconStyle

[Box5Icon]
Meter=Image
MeterStyle=BoxIconStyle

[Box6Icon]
Meter=Image
MeterStyle=BoxIconStyle

[Box1Text]
Meter=String
MeterStyle=InfoStyle | BoxTextStyle

[Box2Text]
Meter=String
MeterStyle=InfoStyle | BoxTextStyle

[Box3Text]
Meter=String
MeterStyle=InfoStyle | BoxTextStyle

[Box4Text]
Meter=String
MeterStyle=InfoStyle | BoxTextStyle

[Box5Text]
Meter=String
MeterStyle=InfoStyle | BoxTextStyle

[Box6Text]
Meter=String
MeterStyle=InfoStyle | BoxTextStyle

;-----------------------------------------

; [DividerStyle]
; Shape=#DividerShape#
; Y=(#NumberOfItems#>[##CURRENTSECTION#]?([[##CURRENTSECTION#]:Y]+#DropdownItemHeight#+#DividerSpace#):0)
; Hidden=(#NumberOfItems#>[##CURRENTSECTION#]?(([#DividerExists[##CURRENTSECTION#]]-1)*-1):1)
; DynamicVariables=1

[Divider1]
Meter=

[Divider2]
Meter=

[Divider3]
Meter=

[Divider4]
Meter=

[Divider5]
Meter=

[Divider6]
Meter=

[Divider7]
Meter=

[Divider8]
Meter=

[Divider9]
Meter=
