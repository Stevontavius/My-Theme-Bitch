@import url(https://mwittrien.github.io/BetterDiscordAddons/Themes/_res/SettingsIcons.css);
@import url(https://mwittrien.github.io/BetterDiscordAddons/Themes/BlurpleRecolor/BlurpleRecolor.css);

:root {
	--transparencycolor:			0, 0, 0;
	--transparencyalpha:			0.15;
	--messagetransparency:			0.5;
	--guildchanneltransparency:		0.15;
	--chatinputtransparency:		0.0;
	--memberlisttransparency:		0.0;
	--accentcolor:				190, 78, 180;
	
	--settingsicons:			1;
	--font:					"gg sans", "Noto Sans";
	--textshadow:				transparent;
	
	--textbrightest: 			255, 255, 255;
	--textbrighter: 			222, 222, 222;
	--textbright: 				200, 200, 200;
	--textdark: 				160, 160, 160;
	--textdarker: 				125, 125, 125;
	--textdarkest: 				90, 90, 90;
	
	--background:				url(https://mwittrien.github.io/BetterDiscordAddons/Themes/BasicBackground/_res/background.jpg);
	--backgroundposition:			center;
	--backgroundsize:			cover;
	--backgroundblur:			0;
	
	--popout:				var(--background);
	--popoutposition:			var(--backgroundposition);
	--popoutsize:				var(--backgroundsize);
	--popoutblur:				var(--backgroundblur);
	
	--backdrop:				rgba(0, 0, 0, 0.85);
	--backdropposition:			center;
	--backdropsize:				cover;
	--backdropblur:				0;
	
	
	--transparencycolor_v:			var(--transparencycolor_s, var(--transparencycolor));
	--transparencyalpha_v:			var(--transparencyalpha_s, var(--transparencyalpha));
	--messagetransparency_v:		var(--messagetransparency_s, var(--messagetransparency));
	--guildchanneltransparency_v:		var(--guildchanneltransparency_s, var(--guildchanneltransparency));
	--chatinputtransparency_v:		var(--chatinputtransparency_s, var(--chatinputtransparency));
	--memberlisttransparency_v:		var(--memberlisttransparency_s, var(--memberlisttransparency));
	--accentcolor_v:			var(--accentcolor_s, var(--accentcolor));
	
	--font_v:				var(--font_s, var(--font));
	--textshadow_v:				var(--textshadow_s, var(--textshadow));
	--settingsicons_v:			var(--settingsicons_s, var(--settingsicons));
	
	--background_v:				var(--background_s, var(--background));
	--backgroundposition_v:			var(--backgroundposition_s, var(--backgroundposition));
	--backgroundsize_v:			var(--backgroundsize_s, var(--backgroundsize));
	--backgroundblur_v:			calc(1px * var(--backgroundblur_s, var(--backgroundblur)));
	
	--popout_v:				var(--popout_s, var(--popout));
	--popoutposition_v:			var(--popoutposition_s, var(--popoutposition));
	--popoutsize_v:				var(--popoutsize_s, var(--popoutsize));
	--popoutblur_v:				calc(1px * var(--popoutblur_s, var(--popoutblur)));
	
	--backdrop_v:				var(--backdrop_s, var(--backdrop));
	--backdropposition_v:			var(--backdropposition_s, var(--backdropposition));
	--backdropsize_v:			var(--backdropsize_s, var(--backdropsize));
	--backdropblur_v:			calc(1px * var(--backdropblur_s, var(--backdropblur)));
	
	--textbrightest_v:			var(--textbrightest_s, var(--textbrightest));
	--textbrighter_v:			var(--textbrighter_s, var(--textbrighter));
	--textbright_v:				var(--textbright_s, var(--textbright));
	--textdark_v:				var(--textdark_s, var(--textdark));
	--textdarker_v:				var(--textdarker_s, var(--textdarker));
	--textdarkest_v:			var(--textdarkest_s, var(--textdarkest));

	
	--usechatbubbles: 			calc(var(--messagetransparency_v) / (var(--messagetransparency_v) + 0.00000000000000000000001));
	
	--accentcolor2:				var(--accentcolor_v);
	--mentioncolor:				var(--accentcolor_v);
	--linkcolor:				var(--accentcolor_v);
	
	--successcolor: 			59, 165, 92;
	--warningcolor: 			250, 166, 26;
	--dangercolor: 				237, 66, 69;
}

.theme-light, .theme-dark, .theme-amoled {
	--text-positive: rgb(var(--successcolor));
	--text-warning: rgb(var(--warningcolor));
	--text-danger: rgb(var(--dangercolor));
	--info-positive-background: rgba(var(--successcolor),.1);
	--info-positive-foreground: rgb(var(--successcolor));
	--info-positive-text: #fff;
	--info-warning-background: rgba(var(--warningcolor),.1);
	--info-warning-foreground: rgb(var(--warningcolor));
	--info-warning-text: #fff;
	--info-danger-background: rgba(var(--dangercolor),.1);
	--info-danger-foreground: rgb(var(--dangercolor));
	--info-danger-text: #fff;
	--status-positive: rgb(var(--successcolor));
	--status-positive-background: rgb(var(--successcolor));
	--status-positive-text: #fff;
	--status-warning: rgb(var(--warningcolor));
	--status-warning-background: rgb(var(--warningcolor));
	--status-warning-text: #fff;
	--status-danger: rgb(var(--dangercolor));
	--status-danger-background: rgb(var(--dangercolor));
	--status-danger-text: #fff;
	--header-primary: rgb(var(--textbrightest_v));
	--header-secondary: rgb(var(--textbright_v));
	--text-normal: rgb(var(--textbrighter_v));
	--text-muted: rgb(var(--textdarker_v));
	--channels-default: rgb(var(--textdark_v));
	--channel-icon: rgb(var(--textdark_v));
	--interactive-normal: rgb(var(--textbright_v));
	--interactive-hover: rgb(var(--textbrighter_v));
	--interactive-active: rgb(var(--textbrightest_v));
	--interactive-muted: rgb(var(--textdarkest_v));
	--logo-primary: rgb(var(--textbrightest_v));
	--focus-primary: rgb(var(--focuscolor, var(--accentcolor_v))) !important;
	--modal-background: rgba(var(--transparencycolor_v), .2);
	--modal-footer-background: rgba(var(--transparencycolor_v), .2);
	--home-background: transparent;
	--background-accent: rgba(var(--transparencycolor_v), .1);
	--background-primary: rgba(var(--transparencycolor_v), .2);
	--background-secondary: rgba(var(--transparencycolor_v), .3);
	--background-secondary-alt: rgba(var(--transparencycolor_v), .35);
	--background-tertiary: rgba(var(--transparencycolor_v), .4);
	--background-floating: rgba(var(--transparencycolor_v), .5);
	--background-mobile-primary: rgba(var(--transparencycolor_v), .2);
	--background-mobile-secondary: rgba(var(--transparencycolor_v), .3);
	--background-modifier-accent: rgba(var(--textbrightest_v),.1);
	--background-message-automod: rgba(var(--dangercolor),.05);
	--background-message-automod-hover: rgba(var(--dangercolor),.1);
	--channeltextarea-background: rgba(var(--transparencycolor_v), .3);
	--input-background: rgba(var(--transparencycolor_v), .1);
	--elevation-low: 0 1px 5px 0 rgba(var(--transparencycolor_v), .3);
	--elevation-high: 0 2px 10px 0 rgba(var(--transparencycolor_v), .3);
	--font-primary: var(--font_v) !important;
	--font-display: var(--font_v) !important;
}

html {
	color: var(--header-primary);
}


/* ~~~~		0.		TABLE OF CONTENTS				~~~~ */
/*
	1.	TRANSPARENCY
	2.	BACKGROUND
	3.	TITLEBAR
	4.	GUILDLIST
	5.	CHANNELLIST
		1.	GUILDHEADER
		2.	CHANNELS
		3.	DMCHANNELS
		4.	ACCOUNT/VOICE/GOLIVE
	6.	CHAT
		1.	CHANNELHEADER
		2.	MESSAGES
			1.	MESSAGE
			2.	EMBEDS
			3.	NITROGIFT
			4.	INVITE
		3.	TEXTAREA
		4.	AUTOCOMPLETEMENU
		5.	MEMBERLIST
		6.	SEARCHPAGE
		7.	CHAT SIDEBAR
		8.	CALL
		9.	UNAVAILABLESCREEN
	7.	PEOPLES
	8.	STORE/NITRO
	9.	LIBRARY
	10.	DISCOVERY/UNIHUB
	11.	USERSETTINGS
	12.	GUILDSETTINGS
	13.	MODALS
		1.	USERMODAL
		2.	GUILDADD/CREATION
		3.	UPLOADMODAL
		4.	KEYBOARDSHORTCUTSMODAL
		5.	QUICKSWITCHER
		6.	INVITEMODAL/GROUPCREATE
		7.	LOGINSCREEN
		8.	DOWNLOADAPPMODAL
		9.	GUILDBOOSTMODAL
		10.	REACTIONSMODAL
		11.	GUILDWELCOMEMODAL
		12.	GUILDRULESMODAL
		13.	GUILDFEEDBACKMODAL
		14.	SCREENSHAREMODAL
		15.	PHONEVERIFICATIONMODAL
		16.	NOTIFICATIONSMODAL
		17.	PODIUMSTARTMODAL
	14.	POPOUTS
		1.	CONTEXTMENU
		2.	USERPOPOUT
		3.	EMOJIPICKER
		4.	PINS/MENTIONS
		5.	SEARCHPOPOUT
		6.	COLORPICKER
		7.	ADDROLE
		8.	EVERYONEMENTION
		9.	CHANNELFOLLOW
		10.	CHANNELFOLLOWINFO
		11.	EMOJIINFO
		12.	STREAMPREVIEW
		13.	STREAMINFO
		14.	PUBLICGUILDANNOUNCEMENT
		15.	RTCSTATUSPOPOUT
		16.	PHONE-/EMAILVALIDATION
		17.	QUICKSELECTPOPOUT
		18.	WARNINGPOPOUT
		19.	ACTIVETHREADLISTPOPOUT
		20.	ROLEMEMBERSPOPOUT
		21.	FORUMFILTERPOPOUT
		22.	ACTIVITYSHAREPOPOUT
		23.	SOUNDBOARD
		24.	SERVERSURVEY
	15.	GENERAL
		1.	TEXT
		2.	BUTTONS
		3.	INPUTS
		4.	SEARCHBARS
		5.	TAGS
		6.	IMAGES
		7.	SCROLLBARS
		8.	NOTIFICATIONBAR
		9.	TOOLTIPS
	16.	BDSUPPORT
	17.	POWERCORDSUPPORT
	18.	PLUGINSUPPORT
		1.	BDFDB
		2.	DATEVIEWER
		3.	MEMBERCOUNT
		4.	LINENUMBERS
		5.	PERMISSIONVIEWER
		6.	DIRECTDOWNLOAD
		7.	BETTERFORMATINGREDUX
		8.	CHANNELHISTORY
		9.	CHANNELTABS
		10.	TYPINGINDICATOR
		11.	CHANNELDMS
	19.	UPDATENOTICE
	20.	WATERMARK
*/


/* ~~~~		1.		TRANSPARENCY					~~~~ */

body,											/* body													*/
#app-mount .app_b1f720,									/* app					container							*/
#app-mount .app_de4237,									/* app					inner								*/
#app-mount .loading__30066,								/* app					i18n loading							*/
#app-mount .wrapper__246a1,								/* app					errorscreen							*/
#app-mount .bg__12180,									/* app					background							*/
#app-mount .layer__2efaa,								/* layer				container							*/
#app-mount .container_b2ce9c,								/* layer				container							*/
#app-mount .container__590e2,								/* channels				inner								*/
#app-mount .privateChannels__93473,							/* dmchannels												*/
#app-mount .directoryContainer_d3edd9,							/* server app directory											*/
#app-mount .panels__58331 > *,								/* account/voice			inner								*/
#app-mount .chat__52833,								/* chat					container							*/
#app-mount .chatContent__5dca8,								/* chat					channel								*/
#app-mount .container_b181b6,								/* chat					forums								*/
#app-mount .container__10dc7,								/* chat					search								*/
#app-mount .container__7590f,								/* chat					search inner							*/
#app-mount .container_def45c,								/* chat					thread sidebar							*/
#app-mount .wrapper_b8c724,								/* chat					messages loading						*/
#app-mount .noChannel__7bbff,								/* nochannel												*/
#app-mount .members__9f47b,								/* members												*/
#app-mount .members__9f47b > div,							/* members				content								*/
#app-mount .content_c21a16,								/* unavailable												*/
#app-mount .container__5c7e7,								/* peoples												*/
#app-mount .container__0a6a9,								/* peoples				activity list							*/
#app-mount .applicationStore_fc7d76,							/* nitro												*/
#app-mount .shop_b31ed2,								/* shop													*/
#app-mount .containerSidenav__2623a,							/* family control											*/
#app-mount .pageWrapper_fef757,								/* guilddiscovery											*/
#app-mount .pageContainer__1e84a,							/* unihub												*/
#app-mount .scrollerBase_dc3aa9,							/* scroller												*/
#app-mount .standardSidebarView__1129a,							/* settings												*/
#app-mount .contentRegion__0bec1 {							/* settings				content								*/
	background: transparent;
}

#app-mount .scroller__00e7e {								/* peoples				activity scroller						*/
	border: none;
}

#app-mount .sidebarRegion__60457,							/* settings				sidebar								*/
#app-mount .sidebar__0OpfR {								/* sidebarlist				sidebar								*/
	background-color: rgba(var(--transparencycolor_v), calc(0.2 * (var(--transparencyalpha_v) / (var(--transparencyalpha_v) + 0.00000000000000000000001))));
}

#app-mount {										/* app-mount												*/
	background-color: rgba(var(--transparencycolor_v), var(--transparencyalpha_v));
}
#app-mount .wrapper_a7e7a8 {								/* guilds				container							*/
	background-color: rgba(var(--transparencycolor_v), calc(var(--guildchanneltransparency_v) * 2));
}
#app-mount .sidebar_ded4b5 {								/* channels				container							*/
	background-color: rgba(var(--transparencycolor_v), var(--guildchanneltransparency_v));
}
#app-mount .panels__58331 {								/* account/voice			container							*/
	background-color: rgba(var(--transparencycolor_v), calc(var(--guildchanneltransparency_v) / 1.5));
}
#app-mount .container__11d72.themed_b152d4 {						/* channelheader			container							*/
	background-color: rgba(var(--transparencycolor_v), var(--guildchanneltransparency_v));
}
#app-mount .chatHeaderBar__3e137 {							/* channelheader			sub header							*/
	background-color: rgba(var(--transparencycolor_v), var(--guildchanneltransparency_v));
}
#app-mount .membersWrap__90226 {							/* members				container							*/
	background-color: rgba(var(--transparencycolor_v), var(--memberlisttransparency_v));
}
#app-mount .nowPlayingColumn_f5023f {							/* peoples				now playing							*/
	background-color: rgba(var(--transparencycolor_v), var(--memberlisttransparency_v));
}

#app-mount .image_dabcb8 {								/* app					errorscreen image						*/
	background-image: url(https://discord.com/assets/72eaa596042042be6259.svg);
	opacity: 0.6;
}


/* ~~~~		2.		BACKGROUND					~~~~ */

body::before,
body::after {
	content: "";
	position: fixed;
	top: 0;
	left: 0;
	right: 0;
	bottom: 0;
	pointer-events: none;
	z-index: -1;
}
body::before {
	background: var(--background_v) var(--backgroundposition_v)/var(--backgroundsize_v);
}
body::after {
	backdrop-filter: blur(var(--backgroundblur_v));
}
.layer__2efaa {
	z-index: 1000;
}
.container__4bde3::before,
.layer__2efaa ~ .layer__2efaa::before,
.root__6d24f::before,
.container__4bde3::after,
.layer__2efaa ~ .layer__2efaa::after,
.root__6d24f::after {
	content: "";
	position: absolute;
	top: 0;
	left: 0;
	right: 0;
	bottom: 0;
	pointer-events: none;
	z-index: -1;
}
.container__4bde3::before,
.layer__2efaa ~ .layer__2efaa::before,
.root__6d24f::before {
	background: var(--background_v) var(--backgroundposition_v)/var(--backgroundsize_v);
	background-attachment: fixed;
}
.container__4bde3::after,
.layer__2efaa ~ .layer__2efaa::after,
.root__6d24f::after {
	background-color: rgba(var(--transparencycolor_v), var(--transparencyalpha_v));
	backdrop-filter: blur(var(--backgroundblur_v));
}
.uploadArea__13687,
.backdrop__3ff7b,
.backdrop__7e89b {
	background: transparent !important;
	opacity: 1 !important;
	animation: none !important;
}
.uploadArea__13687::before,
.backdrop__3ff7b::before,
.backdrop__7e89b::before,
.uploadArea__13687::after,
.backdrop__3ff7b::after,
.backdrop__7e89b::after {
	content: "";
	position: absolute;
	top: 0;
	left: 0;
	right: 0;
	bottom: 0;
	pointer-events: none;
	z-index: -2;
}
.uploadArea__13687::before,
.backdrop__3ff7b::before,
.backdrop__7e89b::before {
	background: var(--backdrop_v) var(--backdropposition_v)/var(--backdropsize_v);
	background-attachment: fixed;
}
.uploadArea__13687::after,
.backdrop__3ff7b::after,
.backdrop__7e89b::after {
	backdrop-filter: blur(var(--backdropblur_v));
}
.withLayer__1fe9d {
	z-index: -1;
}


/* ~~~~		3.		TITLEBAR					~~~~ */

.titleBar__01af6 {
	z-index: 5001;
}
.titleBar__01af6::after {
	content: "";
	pointer-events: none;
	position: absolute;
	z-index: -1;
	top: 0;
	left: 0;
	width: 100%;
	background-color: rgba(var(--transparencycolor_v), calc(0.1 + var(--guildchanneltransparency_v) * 2));
}
.titleBar__01af6:not(.typeMacOS__496b0)::after {
	height: 22px;
}
.titleBar__01af6.typeMacOS__496b0::after {
	height: 28px;
	width: calc(100% - 4px);
	margin: 2px;
	border-radius: 5px;
}
.titleBar__01af6.typeMacOS__496b0,
.titleBar__01af6.typeMacOS__496b0 .macButtons__7b1bc {
	width: 72px;
}
.titleBar__01af6.typeMacOS__496b0.typeMacOSWithFrame_db4a7d .macButtons__7b1bc {
	margin-top: 0;
	margin-right: 0;
}
.platform-osx .wrapper_a7e7a8 {
	margin-top: 0;
	padding-top: 32px;
}
.platform-osx .standardSidebarView__1129a::before {
	left: 72px;
}
.winButtonMinMax__72f36:hover {
	background-color: rgba(var(--transparencycolor_v), .2);
}


/* ~~~~		4.		GUILDLIST					~~~~ */

#app-mount .childWrapper__01b9c {							/* homebutton/acronym			innerwrap							*/
	background-color: rgba(var(--transparencycolor_v), .3);
	color: var(--text-normal);
	font-weight: 500;
}
#app-mount .wrapper_d281dd:hover .childWrapper__01b9c,
#app-mount .wrapper_d281dd.selected_f5ec8e .childWrapper__01b9c {
	background-color: var(--brand-experiment);
	text-shadow: 1px 1px var(--textshadow_v);
}
#app-mount .wrapper_d281dd rect[fill] {
	fill: rgba(var(--transparencycolor_v), .3);
}
#app-mount .noIcon__06e39 {								/* acronym				minicontainer							*/
	background-color: rgba(var(--transparencycolor_v), .3);
}

#app-mount .circleIconButton_d8df29 {							/* guildadd/discovery			innerwrap							*/
	background-color: rgba(var(--transparencycolor_v), .3);
}
#app-mount .circleIconButton_d8df29.selected__5250e {
	background-color: var(--green-360);
}

#app-mount .guildIconUnavailable_db5297,						/* guilderror				miniicon							*/
#app-mount .guildsError__0aa84 {							/* guilderror				innerwrap							*/
	background-color: rgba(var(--dangercolor)),.3);
}

#app-mount .dragInner_a23293 {								/* dragplaceholder											*/
	background-color: rgba(var(--transparencycolor_v), .3);
}

.wrapper_ed1dea {									/* folder				outerwrap							*/
	margin-bottom: 8px;
}
#app-mount .folder__17546 {								/* folder				iconwrap							*/
	background-color: rgba(var(--transparencycolor_v), .2);
}
#app-mount .folder__17546.hover__043de {
	background-color: rgba(var(--transparencycolor_v), .4);
}
.expandedFolderBackground__1bec6 {							/* folder				background							*/
	background-color: rgba(var(--transparencycolor_v), .2);
	border-radius: 15px 15px 24px 24px;
	top: 0;
	bottom: 0;
	margin-bottom: 8px;
	transition: border-radius 3s ease, background-color 1s ease;
}
.expandedFolderBackground__1bec6.hover__043de {
	background-color: rgba(var(--transparencycolor_v), .4);
}

.wrapper_a7e7a8 .wrapper_ed1dea [role="group"] {					/* folder				guildwrap							*/
	margin-bottom: -8px;
}
.wrapper_a7e7a8 .wrapper_ed1dea [role="group"] .listItem_fa7b36:last-child {
	margin-bottom: 0;
}

.bar_edc096 {										/* guild/channelbar			inner								*/
	box-shadow: 0 2px 6px rgba(var(--transparencycolor_v), .24);
}
.bar_edc096:not(.mention__1afd3) {
	background-color: transparent;
	overflow: hidden;
}
.bar_edc096:not(.mention__1afd3)::before,
.bar_edc096:not(.mention__1afd3)::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	pointer-events: none;
	z-index: -1;
}
.bar_edc096:not(.mention__1afd3)::before {
	background: var(--background_v) var(--backgroundposition_v)/var(--backgroundsize_v);
	background-attachment: fixed;
}
.bar_edc096:not(.mention__1afd3)::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.1));
	backdrop-filter: blur(var(--backgroundblur_v));
}
.sidebar_ded4b5 .bar_edc096:not(.mention__1afd3)::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + var(--guildchanneltransparency_v) * 0.85 + 0.1));
}
.wrapper_a7e7a8 .bar_edc096:not(.mention__1afd3)::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + var(--guildchanneltransparency_v) * 1.9 + 0.1));
}


/* ~~~~		5.		CHANNELLIST					~~~~ */

#app-mount .sidebar_ded4b5 {								/* channels				container							*/
	border-radius: 0;
}

/* ----		5.1.		GUILDHEADER					---- */

.container__7c79d .animatedContainer__341f6 {						/* banner				wrap								*/
	background: none;
	box-shadow: none;
}
.bannerImage__39c51 {									/* banner				image								*/
	-webkit-mask: linear-gradient(rgba(0,0,0,0.9) 70%, rgba(0,0,0,0) 100%);
}
.bannerImage__39c51::before {
	display: none;
}

.header__104ca,										/* header				inner								*/
.searchBar_e4ea2a {									/* header				searchbar							*/
	box-shadow: 0 1px 0 rgba(var(--transparencycolor_v), .2), 0 1.5px 0 rgba(var(--transparencycolor_v), .05), 0 2px 0 rgba(var(--transparencycolor_v), .05);
}
.searchBar_e4ea2a .searchBarComponent__22760 {						/* header				searchbarinner							*/
	background-color: rgba(var(--transparencycolor_v), .2);
}
.clickable__2d589:not(.hasBanner_e78601) .header__104ca:hover,
.selected__0b1ad:not(.hasBanner_e78601) .header__104ca {
	background-color: rgba(var(--transparencycolor_v), .2);
}

/* ----		5.2.		CHANNELS					---- */

.wrapper__7bcde:hover .link__95dc0 {							/* channel				content								*/
	background-color: rgba(var(--transparencycolor_v), .2);
}
.wrapper__7bcde:hover .link__95dc0 [style*="color: var(--text-muted)"] {
	color: var(--header-secondary) !important;
}
.modeSelected__487d6 .link__95dc0,
.modeSelected__487d6:hover .link__95dc0 {
	background-color: rgb(var(--accentcolor_v));
	text-shadow: 1px 1px var(--textshadow_v);
}
.modeSelected__487d6 .link__95dc0 [style*="color: var(--text-muted)"],
.modeSelected__487d6:hover .link__95dc0 [style*="color: var(--text-muted)"] {
	color: var(--header-secondary) !important;
}
.modeSelected__487d6 .link__95dc0 svg,
.modeSelected__487d6:hover .link__95dc0 svg {
	filter: drop-shadow(1px 1px var(--textshadow_v));
}

.icon_eff5d4 {										/* channel				icon								*/
	color: var(--channels-default);
}
.modeMuted__0aeea .icon_eff5d4 {
	color: var(--interactive-muted);
}
.modeMuted__0aeea:hover .icon_eff5d4,
.wrapper__7bcde:hover .icon_eff5d4 {
	color: var(--interactive-hover);
}
.modeConnected__1c02e .icon_eff5d4,
.modeConnected__1c02e:hover .icon_eff5d4,
.modeSelected__487d6 .icon_eff5d4,
.modeSelected__487d6:hover .icon_eff5d4,
.modeUnread_f74c03 .icon_eff5d4,
.modeUnread_f74c03:hover .icon_eff5d4,
.modeUnreadImportant_efb53e .icon_eff5d4,
.modeUnreadImportant_efb53e:hover .icon_eff5d4,
.notInteractive_a7d9fb.modeConnected__1c02e .icon_eff5d4,
.notInteractive_a7d9fb.modeSelected__487d6 .icon_eff5d4 {
	color: var(--interactive-active);
}
.modeConnected__1c02e .subtitle_bba2b7,							/* channel				subtitle							*/
.modeConnected__1c02e:hover .subtitle_bba2b7,
.modeSelected__487d6 .subtitle_bba2b7,
.modeSelected__487d6:hover .subtitle_bba2b7,
.modeUnread_f74c03 .subtitle_bba2b7,
.modeUnread_f74c03:hover .subtitle_bba2b7,
.modeUnreadImportant_efb53e .subtitle_bba2b7,
.modeUnreadImportant_efb53e:hover .subtitle_bba2b7,
.notInteractive_a7d9fb.modeConnected__1c02e .subtitle_bba2b7,
.notInteractive_a7d9fb.modeSelected__487d6 .subtitle_bba2b7 {
	color: var(--interactive-normal);
}
.spine__88e6d {										/* channel				thread spine							*/
	color: var(--channels-default);
}

.wrapper__5848b {									/* voicechat				limit								*/
	background-color: rgba(var(--transparencycolor_v), .15);
}
.wrapper__5848b .users__65981 {
	background-color: transparent;
}
.wrapper__5848b .total_c01838 {
	background-color: rgba(var(--transparencycolor_v), .3);
}
.wrapper__5848b .total_c01838::after {
	border-right-color: rgba(var(--transparencycolor_v), .3);
}

.listDefault__205d0 .clickable__137bc:hover .content_b60865 {
	background-color: rgba(var(--transparencycolor_v), .2);
}

#app-mount .streamPreview__1846c {
	position: relative;
	background-color: transparent;
	color: var(--header-secondary);
	overflow: hidden;
}
.streamPreview__1846c::before,
.streamPreview__1846c::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	border-radius: 5px;
	pointer-events: none;
	z-index: -1;
}
.streamPreview__1846c::before {
	background: var(--popout_v) var(--popoutposition_v)/var(--popoutsize_v);
	background-attachment: fixed;
}
.streamPreview__1846c::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.25));
	backdrop-filter: blur(var(--popoutblur_v));
}
#app-mount .previewContainer_bb1924 {
	background-color: transparent;
}
#app-mount .watchButton__0d283 {
	border-color: var(--header-secondary);
	color: var(--header-secondary);
}
#app-mount .watchButton__0d283:not([disabled]):hover {
	border-color: var(--header-primary);
	color: var(--header-primary);
}

/* ----		5.3.		DMCHANNELS					---- */

.interactive__776ee:focus-within,							/* dmchannel/page			inner								*/
.interactive__776ee:hover {
	background-color: rgba(var(--transparencycolor_v), .2);
}
.selected_d94cf9,
.selected_d94cf9:focus-within,
.selected_d94cf9:hover {
	background-color: rgb(var(--accentcolor_v));
	color: var(--header-primary);
	text-shadow: 1px 1px var(--textshadow_v);
}
.selected_d94cf9 svg:not(.svg_f5b652) {
	filter: drop-shadow(1px 1px var(--textshadow_v));
}

.empty__086ba {										/* loadingplaceholders											*/
	fill: rgba(var(--transparencycolor_v), .4);
}

/* ----		5.4.		ACCOUNT/VOICE/GOLIVE				---- */

.panels__58331 > *,									/* account/voice			inner								*/
.panels__58331 .wrapper__0ed4a > * {							/* account/voice			inner								*/
	background: none;
	border: none;
}
.panels__58331 > *:not(:empty) ~ *:not(:empty) {
	border-top: 1px solid rgba(var(--transparencycolor_v), .2);
}

button.button__4f306.enabled__470f0 {							/* account/voice			panel button							*/
	opacity: 0.7;
}
button.button__4f306.enabled__470f0:hover {
	opacity: 1;
	background-color: rgb(var(--accentcolor_v));
}
.withTagAsButton_cc125f:hover,
.withTagless__98b7d:hover {
	background-color: rgb(var(--accentcolor_v));
}
button.button__4f306.enabled__470f0:hover svg {
	filter: drop-shadow(1px 1px var(--textshadow_v));
}
.button__66e8c.buttonColor_a6eb73 {
	background-color: rgba(var(--transparencycolor_v), .3);
}
.button__66e8c.buttonColor_a6eb73:hover {
	background-color: rgb(var(--accentcolor_v));
}
.button__66e8c.buttonColor_a6eb73.buttonActive__407a7,
.button__66e8c.buttonColor_a6eb73.buttonActive__407a7:hover {
	background-color: rgb(var(--accentcolor_v));
	text-shadow: 1px 1px var(--textshadow_v);
}
.button__66e8c.buttonColor_a6eb73.buttonActive__407a7 svg,
.button__66e8c.buttonColor_a6eb73.buttonActive__407a7:hover svg {
	filter: drop-shadow(1px 1px var(--textshadow_v));
}


/* ~~~~		6.		CHAT						~~~~ */

.chat__52833.threadSidebarOpen_fa231d {							/* chat					threadsidebar open						*/
	border-radius: 0;
}
.editor_e77931 {									/* chat					editor								*/
	border: none;
}
#app-mount .background_e80d5a .container__92dc8,
#app-mount .background_e80d5a .container_acafc1,
#app-mount .background_e80d5a .container_f55cad,
#app-mount .background_e80d5a .icon_f71c55,
#app-mount .background_e80d5a .containerCard__30250,
#app-mount .background_e80d5a .containerCard__30250:hover,
#app-mount .background_e80d5a .interactiveCard_d5a839,
#app-mount .background_e80d5a .emptyStateContainer__3c229,
#app-mount .background_e80d5a .card_d4f6c7,
#app-mount .container_b181b6 .mainCard__8a660,
#app-mount .container_b181b6 .sidebarCard__44447,
#app-mount .container__10dc7 .channelRow__96673 {
	background-color: var(--background-secondary);
}
@media (max-width: 1300px) {
	.container_acafc1,
	.container_f55cad {
		background: none !important;
	}
}
#app-mount .background_e80d5a .containerCard__30250 {
	border-color: var(--background-secondary);
}
#app-mount .background_e80d5a .container__16581:hover,
#app-mount .container_b181b6 .pill_f055c3,
#app-mount .container__10dc7 .channelRow__96673:hover {
	background: var(--background-tertiary);
}
.contentPreview_b317ee {								/* forum list				item								*/
	border-color: rgb(var(--transparencycolor_v));
}
#app-mount .textContentFooter__5a630 {							/* forum list				item footer							*/
	background: linear-gradient(0deg, rgba(var(--transparencycolor_v), .5), rgba(var(--transparencycolor_v), .1));
}
.container__8ee50 {											
	border-color: var(--background-floating);
}
.divider_ffec75 {									/* forum				fat divider							*/
	background: var(--background-floating);
}
#app-mount .container_c24cbd.isOpen_d88bb6 {						/* forum				selected post							*/
	background-color: rgb(var(--accentcolor_v));
	text-shadow: 1px 1px var(--textshadow_v);
}
#app-mount .container_c24cbd.isOpen_d88bb6 .defaultColor__77578,
#app-mount .container_c24cbd.isOpen_d88bb6 [style*="color: var(--header-secondary)"] {
	color: var(--header-primary) !important;
}
#app-mount .container_c24cbd.isOpen_d88bb6 .author__185be a,
#app-mount .container_c24cbd.isOpen_d88bb6 [style*="color: var(--text-muted)"] {
	color: var(--header-secondary) !important;
}

/* ----		6.1.		CHANNELHEADER					---- */

.container__11d72.themed_b152d4 {							/* header				themedcontainer							*/
	box-shadow: 0 1px 0 rgba(var(--transparencycolor_v), .2), 0 1.5px 0 rgba(var(--transparencycolor_v), .05), 0 2px 0 rgba(var(--transparencycolor_v), .05);
}

.input__321f5:focus {									/* header				dmchannelinput							*/
	background-color: rgba(var(--transparencycolor_v), .2);
}
.input__321f5:focus,
.outer_c57160:hover .input__321f5 {
	box-shadow: inset 0 0 0 1px rgba(var(--transparencycolor_v), .2);
}
.children__32014::after {								/* header				topicgradient							*/
	display: none;
}

.akaBadge__7df41 {									/* header				aka								*/
	background-color: rgba(var(--transparencycolor_v), .3);
}

.searchBar_e0c60b {									/* header				searchbar							*/
	background-color: rgba(var(--transparencycolor_v), .3);
}
#app-mount .public-DraftEditorPlaceholder-root {
	color: rgb(var(--textdarker_v));
}
#app-mount .public-DraftEditorPlaceholder-hasFocus {
	color: var(--header-secondary);
}
#app-mount .searchFilter__118cb,
#app-mount .searchAnswer_b452e7 {
	background-color: rgb(var(--accentcolor_v));
	text-shadow: 1px 1px var(--textshadow_v);
}

/* ----		6.2.		MESSAGES					---- */

.clickableAction_bef9b9:hover .action_c957d9,						/* guidancechannel			options								*/
.row__70f4c:hover {
	background-color: rgba(var(--transparencycolor_v), .4);
}

.emptyChannelIcon__1a1ba {								/* welcomemessage			empty channelicon						*/
	position: relative;
	background: rgba(var(--transparencycolor_v), .4);
	overflow: hidden;
}
.emptyChannelIcon__1a1ba::before {
	content: "";
	position: absolute;
	top: 0;
	right: 0;
	bottom: 0;
	left: 0;
	background: var(--header-primary);
	-webkit-mask: url(https://discord.com/assets/1b60cdb56c8c081495ac.svg) center no-repeat;
}

.button_fb39e8:hover {									/* welcomemessage			edit channel							*/
	background-color: rgb(var(--accentcolor_v));
	color: var(--interactive-active);
	text-shadow: 1px 1px var(--textshadow_v);
}

#app-mount .role__88585 {								/* welcomemessage			role								*/
	background: transparent;
	border-color: rgba(var(--textbrighter_v), .6);
	border-radius: 5px;
	height: 22px;
	padding: 0 5px;
	position: relative;
}
#app-mount .role__88585[style*="border-color: rgba(185, 187, 190, .6)"] {
	border-color: rgba(var(--textbrighter_v), .6) !important;
}
#app-mount .role__88585 .roleColor_dc66b5 {						/* welcomemessage			rolecircle							*/
	position: absolute;
	background-color: var(--text-normal);
	border-radius: 3px;
	opacity: 0.5;
	height: 100%;
	width: 100%;
	margin: 0;
	left: 0;
	top: 0;
	z-index: -1;
}
#app-mount .role__88585:hover .roleColor_dc66b5 {
	opacity: 0.8;
}
#app-mount .role__88585 .roleColor_dc66b5[style*="background-color: rgb(185, 187, 190)"] {
	background-color: var(--text-normal) !important;
}

.divider_b9338f.hasContent_fea365 {							/* divider				hascontent							*/
	border-width: calc(1px * (1 - var(--usechatbubbles)));
}
.divider_b9338f.hasContent_fea365::before {
	content: "";
	position: absolute;
	top: -0.6rem;
	bottom: -0.6rem;
	right: -0.2rem;
	left: 0;
	background: rgba(var(--transparencycolor_v), calc(var(--messagetransparency_v) * 0.5));
	border-radius: 5px;
	pointer-events: none;
	z-index: -1;
}
.content_d67847 {									/* divider				content								*/
	position: absolute;
	background-color: transparent;
	padding: 2px 8px;
	width: unset;
}
.content_d67847::before,
.content_d67847::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	pointer-events: none;
	opacity: calc(1 - var(--usechatbubbles));
	z-index: -1;
}
.content_d67847::before {
	background: var(--background_v) var(--backgroundposition_v)/var(--backgroundsize_v);
	background-attachment: fixed;
}
.content_d67847::after {
	background-color: rgba(var(--transparencycolor_v), var(--transparencyalpha_v));
	backdrop-filter: blur(var(--backgroundblur_v));
}
.unreadPill__715fc {									/* divider				unreadpill							*/
	border-radius: calc(4px * var(--usechatbubbles)) 4px 4px calc(4px * var(--usechatbubbles));
	padding-left: calc(4px * var(--usechatbubbles) + 1px * (1 - var(--usechatbubbles)));
}
.unreadPillCap__96b8d {									/* divider				unreadpillcap							*/
	opacity: calc(1 - var(--usechatbubbles));
}

.hasMore_b03f46:hover {
	background-color: rgba(var(--transparencycolor_v), .2);
}
.jumpToPresentBar__0ff7f {								/* bar					jumptopresent							*/
	bottom: -8px;
	background-color: transparent;
	border-bottom: 1px solid var(--background-modifier-accent);
	overflow: hidden;
	opacity: 1;
}
.jumpToPresentBar__0ff7f::before,
.jumpToPresentBar__0ff7f::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	pointer-events: none;
	z-index: -1;
}
.jumpToPresentBar__0ff7f::before {
	background: var(--background_v) var(--backgroundposition_v)/var(--backgroundsize_v);
	background-attachment: fixed;
}
.jumpToPresentBar__0ff7f::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.2));
	backdrop-filter: blur(var(--backgroundblur_v));
}
.messagesWrapper_ea2b0b:has(.jumpToPresentBar__0ff7f) ~ .form__13a2c .channelTextArea__2e60f,
.messagesWrapper_ea2b0b:has(.jumpToPresentBar__0ff7f) ~ .form__13a2c .scrollableContainer__33e06 {
	border-top-right-radius: 0;
	border-top-left-radius: 0;
}

/* ====		6.2.1.		MESSAGE						==== */

#app-mount .message__04d9f {								/* message				confirm modal							*/
	background-color: rgba(var(--transparencycolor_v), .2);
	box-shadow: none;
}
.message__80c10,									/* message				container							*/
.messagesWrapper_ea2b0b .wrapper__09ecc,						/* message				upload placeholder						*/
.card_d4f6c7 .wrapper__09ecc,								/* message				home								*/
.wrapper__5c5cd,									/* message				loading 							*/
.message_f3a9e4,									/* message				mention popout							*/
.message__41c2a,									/* message				inbox popout							*/
.message__04d9f .wrapper__09ecc,							/* message				settings preview						*/
.messageGroupCozy__2dedd,								/* message				pin popout							*/
.message_d8db25 .wrapper__09ecc {							/* message				searchpage							*/
	background-color: rgba(var(--transparencycolor_v), var(--messagetransparency_v)) !important;
	contain: unset;
}
.message_d8db25 .wrapper__09ecc {							/* message				searchpage							*/
	background-color: rgba(var(--transparencycolor_v), calc(var(--messagetransparency_v) * 0.8)) !important;
}
.message__80c10.selected_fd9051,
.mouse-mode .message__80c10:hover,
.mouse-mode.full-motion .message__80c10:hover,
.mouse-mode .wrapper__5c5cd:hover,
.mouse-mode.full-motion .wrapper__5c5cd:hover {
	background-color: rgba(var(--transparencycolor_v), calc(var(--messagetransparency_v) * 1.2 * var(--usechatbubbles) + 0.3 * (1 - var(--usechatbubbles)))) !important;
}
.messageListItem__6a4fb > .message__80c10.groupStart__56db5 {
	border-top-right-radius: 5px;
	border-top-left-radius: 5px;
}
.messageListItem__6a4fb:has(+ .messageListItem__6a4fb > .message__80c10.groupStart__56db5) > .message__80c10,
.messageListItem__6a4fb:has(+ :not(.messageListItem__6a4fb)) > .message__80c10 {
	border-bottom-right-radius: 5px;
	border-bottom-left-radius: 5px;
}
.messageListItem__6a4fb > .message__80c10.groupStart__56db5:before {
	top: 2px;
	border-top-left-radius: 5px;
}
.messageListItem__6a4fb:has(+ .messageListItem__6a4fb > .message__80c10.groupStart__56db5) > .message__80c10:before,
.messageListItem__6a4fb:has(+ :not(.messageListItem__6a4fb)) > .message__80c10:before {
	bottom: 2px;
	border-bottom-left-radius: 5px;
}
.backgroundFlash_e5b9ad .message__80c10 {						/* message				jump flash							*/
	position: relative;
}
.backgroundFlash_e5b9ad .message__80c10::before {
	content: "";
	position: absolute;
	background: var(--message-background-flash, transparent);
	top: 0;
	right: 0;
	bottom: 0;
	left: 0;
	z-index: 1;
	pointer-events: none;
}
.backgroundFlash_e5b9ad .cozyMessage__64ce7::before {
	left: calc(-80px * var(--usechatbubbles));
}
.message__80c10.ephemeral_c26b64,							/* message				localbot							*/
.message__80c10.replying_d7b6ad,							/* message				replying							*/
.message__80c10.highlighted__5f454 {							/* message				highlighted							*/
	background-image: linear-gradient(rgba(var(--accentcolor_v), calc(0.2 * (1 - var(--usechatbubbles)))), rgba(var(--accentcolor_v), calc(0.2 * (1 - var(--usechatbubbles)))));
}
.message__80c10.mentioned__58017 {							/* message				mentioned							*/
	background-image: linear-gradient(rgba(var(--mentioncolor), calc(0.2 * (1 - var(--usechatbubbles)))), rgba(var(--accentcolor_v), calc(0.2 * (1 - var(--usechatbubbles)))));
}
.message__80c10.automodMessage__410f7 {							/* message				automodMessage							*/
	background-image: linear-gradient(rgba(var(--dangercolor), calc(0.2 * (1 - var(--usechatbubbles)))), rgba(var(--dangercolor), calc(0.2 * (1 - var(--usechatbubbles)))));
}
.message__80c10.mentioned__58017:before,
.message__80c10.ephemeral_c26b64:before,
.message__80c10.automodMessage__410f7:before,
.message__80c10.replying_d7b6ad:before,
.message__80c10.highlighted__5f454:before {
}
.message__80c10.ephemeral_c26b64::before,
.message__80c10.replying_d7b6ad::before,
.message__80c10.highlighted__5f454::before {
	background-color: rgb(var(--accentcolor_v));
}
.message__80c10.mentioned__58017::before {
	background-color: rgb(var(--mentioncolor));
}
.message__80c10.automodMessage__410f7::before {
	background-color: rgb(var(--dangercolor));
}
.message__80c10.mentioned__58017 .contents_f41bb2 .messageContent__21e69 {
	border-radius: 3px;
	background-color: rgba(var(--mentioncolor), calc(0.3 * var(--usechatbubbles)));
}
#app-mount .avatar__08316,								/* message				container avatar						*/
#app-mount .avatar_eb6eba {								/* message				loading avatar							*/
	position: absolute;
	top: 2px;
	left: calc(-70px * var(--usechatbubbles) + 16px);
}
#app-mount .messageItemBody_e13b10.hasReply_febd50 .avatar__08316,
#app-mount .repliedMessage_e2bf4a ~ * .avatar__08316 {
	top: 24px;
}
#app-mount .avatarDecoration__14b3c {							/* message				avatar decoration						*/
	position: absolute;
	top: 2px;
	left: calc(-70px * var(--usechatbubbles) + 16px - (6.6666666px * var(--decoration-to-avatar-ratio)/2));
}
#app-mount .messageItemBody_e13b10.hasReply_febd50 .avatarDecoration__14b3c,
#app-mount .repliedMessage_e2bf4a ~ * .avatarDecoration__14b3c {
	top: 24px;
}

#app-mount .replyBadge__3d01e {								/* message				reply badge							*/
	background-color: rgba(var(--transparencycolor_v), .5);
}
#app-mount .spine_d081ec {
	width: 0px;
	top: 20px;
	right: calc(1px * (-32 * var(--usechatbubbles) + -25 * (1 - var(--usechatbubbles))));
	left: unset;
	border: none;
}
#app-mount .compact__54ecc .spine_d081ec {
	right: 0;
}
#app-mount .repliedMessage_e2bf4a::before,						/* message				reply spine							*/
#app-mount .repliedMessage_e2bf4a::after,
#app-mount .spine_d081ec::before,							/* message				command spine							*/
#app-mount .spine_d081ec::after {
	--avatar-size: 38px;
	--gutter: 16px;
	--spine-width: 2px;
	content: "";
	display: block;
	position: absolute;
	-webkit-box-sizing: border-box;
	box-sizing: border-box;
	top: 50%;
	right: unset;
	bottom: 0;
	left: calc(-1 * var(--avatar-size) - (6px * var(--usechatbubbles)));
	width: calc(var(--avatar-size) - 4px);
	margin: calc(-1 * var(--spine-width)/2) var(--reply-spacing) calc(.125rem - 4px) calc(-1 * var(--spine-width)/2);
	border-right: 0 solid var(--background-accent);
	border-left: var(--spine-width) solid var(--background-accent);
}
#app-mount .repliedMessage_e2bf4a::before,
#app-mount .repliedMessage_e2bf4a::after {
	border-top: var(--spine-width) solid var(--background-accent);
	border-bottom: 0 solid var(--background-accent);
	border-top-left-radius: 6px;
}
#app-mount .spine_d081ec::before,
#app-mount .spine_d081ec::after {
	border-top: 0 solid var(--background-accent);
	border-bottom: var(--spine-width) solid var(--background-accent);
	border-bottom-left-radius: 6px;
}
#app-mount .compact__54ecc .repliedMessage_e2bf4a::before,
#app-mount .compact__54ecc .repliedMessage_e2bf4a::after,
#app-mount .compact__54ecc .spine_d081ec::before,
#app-mount .compact__54ecc .spine_d081ec::after {
	--avatar-size: 20px;
	left: calc(-1 * var(--avatar-size));
}
#app-mount .repliedMessage_e2bf4a::before,
#app-mount .spine_d081ec::before {
	border-color: rgba(var(--textbrighter_v), calc(0.3 * (1 - var(--usechatbubbles))));
}
#app-mount .repliedMessage_e2bf4a::after,
#app-mount .spine_d081ec::after {
	border-color: rgba(var(--transparencycolor_v), calc(0.5 * var(--usechatbubbles)));
}
#app-mount .compact__54ecc .repliedMessage_e2bf4a::before,
#app-mount .compact__54ecc .spine_d081ec::before {
	border-color: rgba(var(--textbrighter_v), .3);
}
#app-mount .compact__54ecc .repliedMessage_e2bf4a::after,
#app-mount .compact__54ecc .spine_d081ec::after {
	border-color: transparent;
}

#app-mount .cozy_f5c119.hasThread__58ee2::before,					/* message				thread spine							*/
#app-mount .cozy_f5c119.hasThread__58ee2::after,
#app-mount .compact__54ecc.hasThread__58ee2::after {
	--avatar-size: 38px;
	--gutter: 16px;
	--spine-width: 2px;
	content: "";
	display: block;
	position: absolute;
	top: 2rem;
	bottom: 29px;
	left: calc(var(--avatar-size) * (1 - var(--usechatbubbles)) - var(--avatar-size) * var(--usechatbubbles));
	width: calc(var(--avatar-size) - 10px + (4px * var(--usechatbubbles)));
	margin: calc(-1 * var(--spine-width)/2) var(--reply-spacing) calc(.125rem - 4px) calc(-1 * var(--spine-width)/2);
	border-top: 0 solid var(--background-accent);
	border-right: 0 solid var(--background-accent);
	border-bottom: var(--spine-width) solid var(--background-accent);
	border-left: var(--spine-width) solid var(--background-accent);
	border-bottom-left-radius: 8px;
}
#app-mount .cozy_f5c119.hasThread__58ee2::before {
	border-color: rgba(var(--textbrighter_v), calc(0.3 * (1 - var(--usechatbubbles))));
}
#app-mount .cozy_f5c119.hasThread__58ee2::after {
	border-color: rgba(var(--transparencycolor_v), calc(0.5 * var(--usechatbubbles)));
}
#app-mount .message__80c10.mentioned__58017.hasThread__58ee2::before {
	background-color: transparent;
}
#app-mount .compact__54ecc.hasThread__58ee2::after {
	left: calc(var(--avatar-size) + 11px);
	width: calc(var(--avatar-size) - 13px);
	border-color: rgba(var(--textbrighter_v), .3);
}
#app-mount .compact__54ecc.hasThread__58ee2 .contents_f41bb2::before {
	border-color: rgba(var(--textbrighter_v), .3);
}

.spine_d081ec {
	border-color: rgba(var(--textbrighter_v), .3);
}
.hasThread__58ee2 .spine_d081ec {
	display: none;
}

.cozy_f5c119 .header__39b23::after,							/* message				container header						*/
.cozy__32560 .header_c65767::after {							/* message				loading header							*/
	content: "";
	position: absolute;
	top: 12px;
	left: -32px;
	border: 10px solid transparent;
	border-right: 12px solid rgba(var(--transparencycolor_v), var(--messagetransparency_v));
}
.messageGroupWrapper_f8c6e9 .messageGroupCozy__2dedd .header__39b23::after {
	top: 2px;
}
.message_d8db25 .wrapper__09ecc .header__39b23::after {
	border-right-color: rgba(var(--transparencycolor_v), calc(var(--messagetransparency_v) * 0.8));
}
.cozy_f5c119 .timestamp_cdbd93.alt__6c563 {
	left: calc(-78px * var(--usechatbubbles));
}
.cozy_f5c119 .iconContainer_dfc268 {
	background-color: rgba(var(--transparencycolor_v), var(--messagetransparency_v));
	border-radius: 50%;
	left: calc(1px * (-58 * var(--usechatbubbles) + -48 * (1 - var(--usechatbubbles))));
	height: 25px !important;
	width: 25px !important;
	margin: unset;
	margin-right: 1rem;
	padding: 0;
}
.cozy_f5c119 .blockedSystemMessage_e58a4c .iconContainer_dfc268 {
	background-color: transparent;
}
.cozy_f5c119 .iconContainer_dfc268::after {
	content: "";
	position: absolute;
	top: 2px;
	left: 26px;
	border: 10px solid transparent;
	border-right: 12px solid rgba(var(--transparencycolor_v), var(--messagetransparency_v));
}
.cozy_f5c119 .blockedSystemMessage_e58a4c .iconContainer_dfc268::after {
	display: none;
}
.selected_fd9051.message__80c10.cozy_f5c119 .header__39b23::after, 
.mouse-mode .message__80c10.cozy_f5c119:hover .header__39b23::after,
.mouse-mode.full-motion .message__80c10.cozy_f5c119:hover .header__39b23::after,
.mouse-mode .wrapper__5c5cd.cozy__32560:hover .header_c65767::after,
.mouse-mode.full-motion .wrapper__5c5cd.cozy__32560:hover .header_c65767::after,
.selected_fd9051.message__80c10.cozy_f5c119 .iconContainer_dfc268::after,
.mouse-mode .message__80c10.cozy_f5c119:hover .iconContainer_dfc268::after,
.mouse-mode.full-motion .message__80c10.cozy_f5c119:hover .iconContainer_dfc268::after {
	border-right-color: rgba(var(--transparencycolor_v), calc(var(--messagetransparency_v) * 1.2));
}
#app-mount .mentioned__58017.cozy_f5c119 .header__39b23::after {
	border-right-color: rgba(var(--mentioncolor), calc(var(--messagetransparency_v) * 100000000000000000000000000000));
}
#app-mount .ephemeral_c26b64.cozy_f5c119 .header__39b23::after,
#app-mount .replying_d7b6ad.cozy_f5c119 .header__39b23::after,
#app-mount .highlighted__5f454.cozy_f5c119 .header__39b23::after {
	border-right-color: rgba(var(--accentcolor_v), calc(var(--messagetransparency_v) * 100000000000000000000000000000));
}
#app-mount .automodMessage__410f7.cozy_f5c119 .header__39b23::after {
	border-right-color: rgba(var(--dangercolor), calc(var(--messagetransparency_v) * 100000000000000000000000000000));
}
.message_f3a9e4,
.message__41c2a,
.zalgo__39311 .messageContent__21e69,
.zalgo__39311.cozy_f5c119 .header__39b23,
.wrapper__5c5cd,
.cozy__32560 .header_c65767 {
	overflow: visible;
}
#app-mount .cozyMessage__64ce7,								/* message				container cozy							*/
#app-mount .messagesWrapper_ea2b0b .cozy_f5c119,					/* message				upload placeholder cozy						*/
#app-mount .card_d4f6c7 .cozy_f5c119,							/* message				home cozy							*/
#app-mount .cozy__32560 {								/* message				loading cozy							*/
	margin-left: calc(80px * var(--usechatbubbles));
	padding-left: calc(1px * (10 * var(--usechatbubbles) + 72 * (1 - var(--usechatbubbles))));
}
#app-mount .wrapper__09ecc[data-list-item-id*="Uploader"] {
	margin-top: 1rem;
}
#app-mount .compact__26766 {								/* message				loading compact							*/
	margin-top: .0625rem;
}
#app-mount .cozy_f5c119 .header__39b23,
#app-mount .cozy_f5c119 .messageContent__21e69,
#app-mount .cozy__32560 .header_c65767 {
	margin-left: 0;
	padding-left: 0;
}
.messageContainer_aa7d14 .wrapper__09ecc,
.messages_f7999e .wrapper__09ecc,
.message__04d9f .wrapper__09ecc,
.messageGroupWrapper_f8c6e9 .messageGroupCozy__2dedd,
.message_d8db25 .wrapper__09ecc {
	border-radius: 5px;
	margin-left: calc(60px * var(--usechatbubbles));
	padding-left: calc(1px * (10 * var(--usechatbubbles) + 72 * (1 - var(--usechatbubbles))));
}
.messages_f7999e .wrapper__09ecc {
	border-radius: 0;
}

.interactiveCard_d5a839.selected__715e8, .interactiveCard_d5a839:active,		/* message				home message							*/
.interactiveCard_d5a839:hover {
	border-color: var(--background-secondary);
}
.feedItemHeader__653e4 {
	border-color: var(--background-primary);
}
.interactiveCard_d5a839.selected__715e8, .interactiveCard_d5a839:active .feedItemHeader__653e4,
.interactiveCard_d5a839:hover .feedItemHeader__653e4 {
	border-color: var(--background-secondary);
}

.wrapper__3d460 {									/* message				loading wrapper							*/
	background: transparent;
}
.avatar_eb6eba {									/* message				loading avatar							*/
	background: rgba(var(--transparencycolor_v), .4);
	opacity: 1 !important;
}
.attachment__7a2d0,									/* message				loading attachment						*/
.blob__8d5bd {										/* message				loading blob							*/
	background: rgb(var(--accentcolor_v));
}

.expanded_be53d7 {									/* message				expanded blocked						*/
	background-color: rgba(var(--transparencycolor_v), .2);
	border-radius: 5px 5px 0 5px;
	margin-bottom: .5625rem;
}

#app-mount .reaction_fef95b {								/* message				reaction							*/
	background-color: rgba(var(--transparencycolor_v), .3);
	border: none;
}
#app-mount .reaction_fef95b:hover {
	background-color: rgba(var(--transparencycolor_v), .4);
	border: none;
}
#app-mount .reaction_fef95b.reactionMe__98f57 {
	background-color: rgba(var(--accentcolor_v), .8);
	border: none;
}
#app-mount .reaction_fef95b.reactionMe__98f57:hover {
	background-color: rgb(var(--accentcolor_v));
	border: none;
}
#app-mount .reaction_fef95b.reactionMe__98f57 .reactionCount_b49901 {
	color: #FFF;
	text-shadow: 1px 1px var(--textshadow_v);
}

.wrapper_c727b6 {									/* message				buttons								*/
	position: relative;
	background: transparent;
}
.wrapper_c727b6::before,
.wrapper_c727b6::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	border-radius: 4px;
	pointer-events: none;
	z-index: -1;
}
.wrapper_c727b6::before {
	background: var(--backgound) var(--backgoundposition)/var(--backgroundsize_v);
	background-attachment: fixed;
}
.wrapper_c727b6::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.25));
	backdrop-filter: blur(var(--backgroundblur_v));
}
.button_d553e5:hover,
.button_d553e5.selected__63428 {
	background-color: rgb(var(--accentcolor_v));
}

.bumpBox_cfd81a {									/* messageelement			publish box							*/
	background-color: rgba(var(--transparencycolor_v), .4);
}

.markup_a7e664 code {									/* messageelement			code								*/
	background-color: transparent;
	border-color: transparent;
}
.markup_a7e664 pre {									/* messageelement			pre								*/
	background-color: rgba(var(--transparencycolor_v), .4);
	border-color: rgba(var(--transparencycolor_v), .1);
}
.markup_a7e664 .inline,									/* messageelement			inline								*/
.after_inlineCode__2197d,
.before_inlineCode__37e14,
.inlineCode_d702a4 {
	background-color: rgba(var(--transparencycolor_v), .4);
}

.textContainer__709ff {									/* messageelement 			plain file text							*/
	background-color: rgba(var(--transparencycolor_v), .4);
	border-color: rgba(var(--transparencycolor_v), .1);
}
.footer__06f4b {									/* messageelement 			plain file footer						*/
	background-color: rgba(var(--transparencycolor_v), .4);
	border-color: rgba(var(--transparencycolor_v), .1);
}
.languageSelector_a1c2f3 {								/* messageelement 			plain file popout						*/
	background-color: transparent;
	border: 1px solid rgba(var(--transparencycolor_v), .3);
	border-radius: 5px;
	box-shadow: 0px 1px 5px 0px rgba(var(--transparencycolor_v), .3);
	overflow: hidden;
}
.languageSelector_a1c2f3::before,
.languageSelector_a1c2f3::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	border-radius: 5px;
	pointer-events: none;
	z-index: -1;
}
.languageSelector_a1c2f3::before {
	background: var(--popout_v) var(--popoutposition_v)/var(--popoutsize_v);
	background-attachment: fixed;
}
.languageSelector_a1c2f3::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.25));
	backdrop-filter: blur(var(--popoutblur_v));
}

#app-mount .spoilerContent__37bfa {							/* messageelement			spoiler								*/
	background-color: rgba(var(--transparencycolor_v), .2);
}
#app-mount .spoilerContent__37bfa.hidden_f44e41 {					/* messageelement			hiddenspoiler							*/
	background-color: rgba(var(--transparencycolor_v), .6);
}

.icon__8c32c[style*="/assets/7ed159b6acb6da5d9593.svg"] {				/* systemmessage			pinicon								*/
	-webkit-mask: url(https://discord.com/assets/7ed159b6acb6da5d9593.svg) center/cover no-repeat;
	background: var(--channels-default) !important;
}
.icon__8c32c[style*="/assets/a1d461025204711133ec.svg"] {				/* systemmessage			missedcall							*/
	-webkit-mask: url(https://discord.com/assets/a1d461025204711133ec.svg) center/cover no-repeat;
	background: var(--channels-default) !important;
}
.icon__8c32c[style*="/assets/7378a83d74ce97d83380.svg"] {				/* systemmessage			joingroupicon							*/
	-webkit-mask: url(https://discord.com/assets/7378a83d74ce97d83380.svg) center/cover no-repeat;
	background: rgb(var(--accentcolor_v)) !important;
}
.icon__8c32c[style*="/assets/9f3b9c1b6e5f77294951.svg"] {				/* systemmessage			recievecallicon							*/
	-webkit-mask: url(https://discord.com/assets/9f3b9c1b6e5f77294951.svg) center/cover no-repeat;
	background: rgb(var(--accentcolor_v)) !important;
}

/* ====		6.2.2.		EMBEDS						==== */

#app-mount .embedFull__8dc21 {								/* embed				wrapper								*/
	background-color: rgba(var(--transparencycolor_v), .3);
	border-left-color: rgb(var(--textdarkest_v));
}

#app-mount .attachment_f3cf2c {								/* attachment				container							*/
	background-color: rgba(var(--transparencycolor_v), .3);
	border-color: rgba(var(--transparencycolor_v), .1);
	margin-left: 18px;
}
#app-mount .message__80c10 .attachment_f3cf2c {
	margin-left: 0;
}
#app-mount .twitchSectionPlayButton__1b39d {
	object-position: -999999px -999999px;
	background: rgba(var(--transparencycolor_v), .4) url('data:image/svg+xml; utf8, <svg xmlns="http://www.w3.org/2000/svg" width="32" height="32" viewBox="0 0 32 32" fill="none"><path d="M12.3333 10.002V22.002L22.3333 16.002L12.3333 10.002Z" fill="rgb(185,187,190)"/></svg>');
	border-radius: 50%;
}
#app-mount .twitchSectionPlayButton__1b39d:hover {
	background-color: rgba(var(--transparencycolor_v), .8);
}

#app-mount .wrapper__3a7a0 {								/* attachment				videowrapper							*/
	background-color: rgba(var(--transparencycolor_v), .3);
}

/* ====		6.2.3.		NITROGIFT					==== */

#app-mount .tile_ebc93b {								/* gift					container							*/
	background-color: rgba(var(--transparencycolor_v), .2);
	box-shadow: 0 0 0 rgba(var(--transparencycolor_v), .15);
}
#app-mount .tile_ebc93b:hover {
	background-color: rgba(var(--transparencycolor_v), .4);
}
#app-mount .title__701c1 {								/* gift					title								*/
	color: var(--header-primary);
}
#app-mount .description__883d4 {							/* gift					description							*/
	color: var(--header-primary);
}
#app-mount .tagline__3427c {								/* gift					tagline								*/
	color: var(--header-secondary);
}

/* ====		6.2.4.		INVITE						==== */

#app-mount .wrapper_efe67f {								/* invite				container							*/
	background-color: rgba(var(--transparencycolor_v), .3);
	border-color: rgba(var(--transparencycolor_v), .1);
}
#app-mount .guildIconImage__93ae7 {							/* invite				icon								*/
	background-color: rgba(var(--transparencycolor_v), .3);
}
#app-mount .guildIconExpired__1d51f {							/* erroricon				expiredguild							*/
	background-color: rgba(var(--transparencycolor_v), .3);
	background-image: url(https://discord.com/assets/baa5b6db50bb89d55668.svg);
	opacity: 0.7;
}
#app-mount .guildName__060cb {								/* invite				name								*/
	color: var(--header-primary);
}
#app-mount .guildDetail__0b882 {							/* invite				details								*/
	color: var(--channels-default);
}

#app-mount .invite__2a93b {								/* invite				group invite							*/
	background-color: rgba(var(--transparencycolor_v), .3);
	border-color: rgba(var(--transparencycolor_v), .1);
}
#app-mount .artworkSpotifySessionEnded__8272a {
	background-image: url(https://discord.com/assets/a7d6af4279f16c27ae9b.svg);
	opacity: .5;
}
#app-mount .header__8b673 {
	color: rgb(var(--textdarker_v));
}
#app-mount .name_b50cd9,
#app-mount .partyStatus__6a567 {
	color: var(--header-primary);
}
#app-mount .moreUsers__1d9e9 {
	background-color: rgba(var(--transparencycolor_v), .3);
	color: var(--header-secondary);
}
#app-mount .partyMemberEmpty__94736 {
	background-color: rgba(var(--transparencycolor_v), .3);
}
#app-mount .helpIcon_a58947 {
	background-color: var(--header-primary);
}


/* ----		6.3.		TEXTAREA					---- */

.form__13a2c {
	padding-top: 0;
	margin-top: 0;
}
.form__13a2c {										/* textarea				form								*/
	background: rgba(var(--transparencycolor_v), var(--chatinputtransparency_v));
	margin-top: 0;
	padding-top: 8px;
	border-top-right-radius: calc(8px * (1 - (var(--memberlisttransparency_v) / (var(--memberlisttransparency_v) + 0.00000000000000000000001))));
	border-top-left-radius: calc(8px * (1 - (var(--guildchanneltransparency_v) / (var(--guildchanneltransparency_v) + 0.00000000000000000000001))));
}
.threadSidebarOpen_fa231d .form__13a2c {
	border-top-right-radius: 8px;
}
.form__13a2c::before {
	display: none;
}

.channelTextArea__2e60f {								/* textarea				channeltextarea							*/
	background-color: transparent;
	border-top-color: var(--background-modifier-accent);
}

.attachedBars_da3c74 {									/* textarea				reply								*/
	background: rgba(var(--transparencycolor_v), .3);
	border: none;
	border-bottom: 1px solid var(--background-modifier-accent);
}
.replyBar_b64d74,
.threadSuggestionBar_b633f7 {
	background: transparent;
}

.scrollableContainer__33e06 {								/* textarea				container							*/
	background-color: rgba(var(--transparencycolor_v), .3);
}

.sprite__294b3 {									/* textarea				emojibutton							*/
	transform: none !important;
}

.wrapper_fbbb73 {									/* textarea				placeholder							*/
	background-color: rgba(var(--transparencycolor_v), .3);
	color: var(--text-normal);
}

.toolbar_c7b525 {									/* textarea				formattoolbar							*/
	background-color: rgb(var(--accentcolor_v));
}
.toolbar_c7b525::before {
	border-top-color: rgb(var(--accentcolor_v));
}
.divider__441cb {									/* textarea				formattoolbar divider						*/
	border-left-color: hsla(0, 0%,100%, .1);
}
.active__05fbc,										/* textarea				buttonactive							*/
.hover_d0ebf2:hover {									/* textarea				buttonhover							*/
	background-color: hsla(0, 0%, 100%, .2);
}
.icon__5a617 {										/* textarea				buttonicon							*/
	color: #fff;
	opacity: .7;
}
.active__05fbc .icon__5a617,
.hover_d0ebf2:hover .icon__5a617 {
	color: #fff;
	opacity: 1;
}

#app-mount .optionPill_f86b98 {								/* textarea				command query pill						*/
	background-color: rgba(var(--transparencycolor_v), .5);
	border-radius: 5px;
}
#app-mount .optionPillKey_e84f41 {							/* textarea				command query pill key						*/
	background-color: transparent;
}

/* ----		6.4.		AUTOCOMPLETEMENU				---- */

#app-mount .autocomplete_df266d {							/* autocomplete				container							*/
	background-color: transparent;
	overflow: hidden;
}
#app-mount .autocomplete_df266d::before,
#app-mount .autocomplete_df266d::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	border-radius: 5px;
	pointer-events: none;
	z-index: -1;
}
#app-mount .autocomplete_df266d::before {
	background: var(--popout_v) var(--popoutposition_v)/var(--popoutsize_v);
	background-attachment: fixed;
}
#app-mount .autocomplete_df266d::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.25));
	backdrop-filter: blur(var(--popoutblur_v));
}
.theme-brand .autocomplete_df266d {
	background: rgb(var(--accentcolor_v)) linear-gradient(rgba(var(--transparencycolor_v), .2), rgba(var(--transparencycolor_v), .2)) !important;
}
.theme-brand .autocomplete_df266d::before,
.theme-brand .autocomplete_df266d::after {
	display: none;
}
#app-mount .bar__8f42e {								/* autocomplete				command info							*/
	background-color: transparent;
}
#app-mount .container_e84cda::after {
	box-shadow: inset 0 -7px 12px -7px rgba(var(--transparencycolor_v), .3);
}
#app-mount .header__02652 {								/* autocomplete				header								*/
	box-shadow: 0 1px 0 0 rgba(var(--transparencycolor_v), .2), 0 1px 2px 0 rgba(var(--transparencycolor_v), .2);
}

#app-mount .option__32fd1 {								/* autocomplete				option								*/
	background-color: rgba(var(--transparencycolor_v), .5);
}
.clickable_f8437d[aria-selected=true] > .base__76a71,					/* autocomplete				rowselected							*/
.clickable_f8437d[aria-disabled=false] > .base__76a71:hover {
	background-color: rgba(var(--transparencycolor_v), .3);
}

#app-mount .wrapper__4e8f1 {								/* autocomplete				categories							*/
	background-color: transparent;
}
#app-mount .selected__608f1,								/* autocomplete				category selected						*/
#app-mount .selected__608f1:hover {
	background-color: rgb(var(--accentcolor_v));
}
#app-mount .selected__608f1 svg {
	filter: drop-shadow(1px 1px var(--textshadow_v));
}

#app-mount .searchSuggestion__1a6a7:hover {						/* gifpicker				suggestions							*/
	text-shadow: 1px 1px var(--textshadow_v);
}

#app-mount .placeholder__1d2a8 {							/* gifpicker				result placeholder						*/
	background-color: rgba(var(--transparencycolor_v), .3);
}

/* ----		6.5.		MEMBERLIST					---- */

.member_b44d5d {									/* member												*/
	background: transparent;
}
.avatar__991e2::before {								/* emptyavatar												*/
	background-color: rgba(var(--transparencycolor_v), .3);
}
.memberGroupsPlaceholder_d0ae46,							/* loadingplaceholders											*/
.placeholderAvatar__21e48,
.placeholderUsername__7fd2c {
	background-color: rgba(var(--transparencycolor_v), .4);
}

/* ----		6.6.		SEARCHPAGE					---- */

.searchResultsWrap__9f374 {								/* searchpage				container							*/
	background-color: transparent;
}
.searchHeader__19d87,									/* searchpage				header								*/
.searchHeader__19d87 ~ .container_d91be8 {						/* searchpage				pagination (BSP)						*/
	background-color: rgba(var(--transparencycolor_v), calc(var(--guildchanneltransparency_v) * 0.8));
	border-radius: 0 0 0 8px;
}
.searchResult_dcd237 {									/* searchpage				searchresult							*/
	background-color: rgba(var(--transparencycolor_v), .2);
}
.button_f8244b {									/* searchpage				jumpbutton							*/ 
	background-color: rgba(var(--transparencycolor_v), .4);
}
.button_f8244b:hover {
	background-color: rgb(var(--accentcolor_v));
	text-shadow: 1px 1px var(--textshadow_v);
}
.pageButton_bcd673:hover {
	background-color: rgba(var(--transparencycolor_v), .4);
}
.activeButton__7a550 {
	text-shadow: 1px 1px var(--textshadow_v);
}

/* ----		6.7.		CHAT SIDEBAR					---- */

.container_def45c {									/* chat					sidebar								*/ 
	border-radius: 0;
}
.container_def45c.floating_f021e2::before,
.container_def45c.floating_f021e2::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	pointer-events: none;
	z-index: -1;
}
.container_def45c.floating_f021e2::before {
	background: var(--background_v) var(--backgroundposition_v)/var(--backgroundsize_v);
	background-attachment: fixed;
}
.container_def45c.floating_f021e2::after {
	background-color: rgba(var(--transparencycolor_v), var(--transparencyalpha_v));
	backdrop-filter: blur(var(--backgroundblur_v));
}
.chatTarget__0ea5e.notFloating__80043 ~ .container_def45c {
	overflow: visible;
}
.chatTarget__0ea5e.notFloating__80043 ~ .container_def45c .container__11d72.themed_b152d4::before {
	content: "";
	position: absolute;
	display: block;
	top: 0;
	bottom: 0;
	left: -8px;
	width: 8px;
	background: inherit;
	box-shadow: inherit;
	pointer-events: none;
}
.chatTarget__0ea5e.notFloating__80043 ~ .container_def45c .container__11d72.themed_b152d4::after {
	content: "";
	position: absolute;
	display: block;
	top: 10px;
	bottom: 10px;
	left: -3.5px;
	width: 1px;
	background: var(--background-modifier-accent);
	pointer-events: none;
}

/* ----		6.8.		CALL						---- */

#app-mount .wrapper_daf1cf {
	z-index: 1002;
}
#app-mount .root__46d4f {								/* popout				inner								*/
	background-color: transparent;
	border: none;
}
.root__46d4f::before,
.root__46d4f::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	pointer-events: none;
	z-index: -1;
}
.root__46d4f::before {
	background: var(--popout_v) var(--popoutposition_v)/var(--popoutsize_v);
	background-attachment: fixed;
}
.root__46d4f::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.25));
	backdrop-filter: blur(var(--popoutblur_v));
}

#app-mount .wrapper_bd2abe {								/* call					voice wrapper							*/
	background-color: rgba(var(--transparencycolor_v), calc(var(--guildchanneltransparency_v) * 0.8));
}
#app-mount .callContainer_cbde45 {							/* call					voice wrapper inner						*/
	background-color: rgba(var(--transparencycolor_v), calc((1 - (var(--guildchanneltransparency_v) * 0.8)) * 0.8));
}
#app-mount .root__3eef0 {								/* call					root								*/
	color: var(--header-primary);
}
.videoWrapper_b42a4f {									/* call					video wrapper							*/
	background-color: rgba(var(--transparencycolor_v), .3);
}
.video__79b68 {										/* call					video								*/
	background-color: transparent;
}
.tile_a411a4,										/* call					user video voicechannel						*/
.tile_f5f57f {										/* call					user video dm							*/
	background-color: rgba(var(--transparencycolor_v), .3);
}
.gradientContainer__9a5a6 {								/* call					gradientcontainer						*/
	display: none;
}
.participantsButton__56586 {								/* call					participantsbutton						*/
	background-color: rgba(0, 0, 0, .3);
}
.participantsButton__56586:hover {
	background-color: rgba(0, 0, 0, .6);
}
.centerButton__3205b,
.colorable_c84c4c.primaryDark__6b700 {
	background-color: rgba(var(--transparencycolor_v), .5);
}
.centerButton__3205b:hover,
.colorable_c84c4c.primaryDark__6b700:hover {
	background-color: rgb(var(--accentcolor_v));
}
.button__13ec4 {
	background-color: rgba(var(--transparencycolor_v), .4);
}
.button__13ec4:hover {
	background-color: rgba(var(--transparencycolor_v), .6);
}
.controlButton_ab2899.colorable_c84c4c.red_a51ba8 {
	background-color: rgba(var(--dangercolor)),.5);
}
.controlButton_ab2899.colorable_c84c4c.red_a51ba8:hover {
	background-color: rgb(var(--dangercolor));
}
.regionSelectPopout__0127b {
	width: 170px;
}

.container__3e5cc {									/* call					podium wrapper							*/
	background-color: rgba(var(--transparencycolor_v), calc(var(--guildchanneltransparency_v) * 0.8));
}
.callContainer_e8faeb {									/* call					podium inner							*/
	background-color: transparent;
}
.scroller_d8c41e {									/* call					podium scroller							*/
	background-color: transparent;
}
.rowContainer__3f2d1 {									/* call					podium row							*/
	background-color: transparent;
}
.participants__5d231 {									/* call					podium participants						*/
	background-color: transparent;
}
.tileContainer__88d69:hover {								/* call					podium participant						*/
	background-color: rgb(var(--accentcolor_v));
}
.container__7b94f {									/* call					podium requests							*/
	background-color: rgba(var(--transparencycolor_v), calc(var(--guildchanneltransparency_v) * 0.3));
}
.headerContainer_bff52d {								/* call					podium requests header						*/
	box-shadow: 0 1px 0 rgba(var(--transparencycolor_v), .2), 0 1.5px 0 rgba(var(--transparencycolor_v), .05), 0 2px 0 rgba(var(--transparencycolor_v), .05);
}

/* ----		6.9.		UNAVAILABLESCREEN				---- */

.category__758fd,									/* loadingplaceholders											*/
.channelIcon_ad6049,
.channelName_f48c90 {
	background: rgba(var(--transparencycolor_v), .4);
}
.splashImage_d708dc {									/* screen				image								*/
	opacity: 0.7;
}


/* ~~~~		7.		PEOPLES						~~~~ */

.addFriendInputWrapper__4bf8e {								/* peoples				add friend							*/
	background-color: rgba(var(--transparencycolor_v), .1);
	border-color: rgba(var(--transparencycolor_v), .3);
}
.addFriendInputWrapper__4bf8e:hover:not(:focus-within) {
	border-color: rgb(var(--transparencycolor_v));
}
.container_a308ae {									/* peoples				explore option							*/
	border: none;
}
.container_a308ae:hover {
	background-color: var(--background-floating);
}
.peopleListItem_d14722 .actionButton__23182 {						/* peoples				actionbutton							*/
	background-color: rgba(var(--transparencycolor_v), .1);
}
.peopleListItem_d14722 .actionButton__23182:hover {
	background-color: rgb(var(--accentcolor_v));
}
.peopleListItem_d14722 .actionButton__23182:hover svg{
	filter: drop-shadow(1px 1px var(--textshadow_v));
}
.peopleListItem_d14722.active__6b8ff,
.peopleListItem_d14722:hover {
	background-color: rgba(var(--transparencycolor_v), .3);
}
.peopleListItem_d14722.active__6b8ff .actionButton__23182,
.peopleListItem_d14722:hover .actionButton__23182 {
	background-color: rgba(var(--transparencycolor_v), .3);
}
#app-mount .outer_a41cf3,								/* playing				card								*/
#app-mount .wrapper__6e669 {								/* playing				card								*/
	background-color: rgba(var(--transparencycolor_v), .2);
	border: unset;
}
#app-mount .outer_a41cf3.active__76f42,
#app-mount .outer_a41cf3.interactive__01cfa:hover,
#app-mount .outer_a41cf3.active__76f42,
#app-mount .outer_a41cf3.interactive__01cfa:hover {
	background-color: rgba(var(--transparencycolor_v), .4);
}
#app-mount .inset__0bfb3 {								/* playing				card inner							*/
	background-color: rgba(var(--transparencycolor_v), .2);
}
.emptyCard_f82dde {									/* playing				empty card							*/
	background-color: rgba(var(--transparencycolor_v), .2);
}
#app-mount .partyMemberOverflow_d12297 {
	background: rgba(var(--transparencycolor_v), .5);
}
#app-mount .partyMemberBackground__8fdc5,
#app-mount .partyMemberUnknown__573ec {
	background-color: rgba(var(--transparencycolor_v), .5);
}
#app-mount .partyMemberUnknownIcon__7bfe8 {
	color: var(--channels-default);
}
#app-mount .popout_c6d10c {								/* playing				popout								*/
	background-color: transparent;
	box-shadow: 0 0 0 1px rgba(var(--transparencycolor_v), .3), 0 8px 16px 0 rgba(var(--transparencycolor_v), .3);
	overflow: hidden;
}
.popout_c6d10c::before,
.popout_c6d10c::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	pointer-events: none;
	z-index: -1;
}
.popout_c6d10c::before {
	background: var(--popout_v) var(--popoutposition_v)/var(--popoutsize_v);
	background-attachment: fixed;
}
.popout_c6d10c::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.3));
	backdrop-filter: blur(var(--popoutblur_v));
}
.memberListItem__4000d:not(.popoutDisabled__5e7e3):hover {
	background-color: rgba(var(--transparencycolor_v), .2);
}


/* ~~~~		7.		STORE/NITRO					~~~~ */

#app-mount .loading__053e3 {								/* loading												*/
	background: transparent;
}

.marketingHeader_c8e5cd {								/* marketingheader											*/
	background-color: rgba(var(--transparencycolor_v), .3);
}

.detailsBlock__1191c {									/* billing 				details								*/
	background-color: rgba(var(--transparencycolor_v), .3);
}

#app-mount .categoryHeader__46769,							/* categoryheader											*/
#app-mount .premiumApplicationsHeader_e2dd83 {
	border-color: var(--background-modifier-accent);
	color: var(--header-primary);
}

#app-mount .tier1Banner__86229 {							/* tier1banner				container							*/
	background-color: rgba(var(--transparencycolor_v), .3);
	color: #fff;
}

.smallCarousel_cb7c79 {
	background-color: rgba(var(--transparencycolor_v), .3);
	border-radius: 5px;
}
#app-mount .item_d7f2df {								/* gamepreview				previewitem							*/
	background-color: rgba(var(--transparencycolor_v), .3);
}
.arrow_f5c530 {										/* gamepreview				prev/nextarrow (big)						*/
	background-color: rgba(var(--transparencycolor_v), .3);
}
#app-mount .themedPagination_c56fb8 .arrow_fe649b {					/* gamepreview				prev/nextarrow (small)						*/
	color: var(--header-primary);
}
#app-mount .themedPagination_c56fb8 .dot__6356c {					/* gamepreview				itemdot (small)							*/
	background-color: var(--header-primary);
}

#app-mount .root__3d5e9 {								/* gameinfo				sectioncontainer						*/
	background-color: rgba(var(--transparencycolor_v), .2);
}
#app-mount .header_c26642 {								/* gameinfo				sectionheader							*/
	color: var(--header-primary);
}
#app-mount .section__51057 {								/* gameinfo				subsection							*/
	border-bottom-color: var(--background-modifier-accent);
}
#app-mount .playerOverflow__58b26 {
	background-color: rgba(var(--transparencycolor_v), .3);
	color: var(--header-secondary);
}
#app-mount .description__6dac8 {							/* gameinfo				subsectiondescription						*/
	color: var(--header-secondary);
}
#app-mount .description__6dac8 strong,
#app-mount .username_c20f20 {								/* gameinfo				subsectionusername						*/
	color: var(--header-primary);
}
#app-mount .smallHeader__9766b {							/* gameinfo				subsectionheader						*/
	color: var(--header-secondary);
}
#app-mount .text__07fd0 {								/* gameinfo				subsectiontext							*/
	color: var(--header-primary);
}
#app-mount .iconCircle__4c74f {
	background-color: rgba(var(--transparencycolor_v), .3);
}
#app-mount .circle_d78580 {
	color: var(--header-primary);
}

#app-mount .blurb__7d206 {								/* section				description							*/
	color: var(--text-normal);
}
#app-mount .description__671fd {							/* section				subdescription							*/
	color: var(--header-secondary);
}

#app-mount .requirements_fd3915 {							/* requirements												*/
	color: var(--text-normal);
}
#app-mount .requirementKey_dd27af {							/* requirements				key								*/
	color: rgb(var(--textdarker_v));
}
#app-mount .content__45a6a {								/* requirements				rating								*/
	color: rgb(var(--textdarker_v));
}

#app-mount .bodySection_ae0d90 {							/* sidebar				section								*/
	background-color: rgba(var(--transparencycolor_v), .2);
	border-top-color: var(--background-modifier-accent);
}
#app-mount .actionText__1ae94 {								/* sidebar				header								*/
	color: var(--text-normal);
}
#app-mount .purchaseUnitOperatingSystem_b02a69 {					/* sidebar				OSicon								*/
	color: rgb(var(--textdarkest_v));
}
#app-mount .price_f6c36e,								/* sidebar				price								*/
#app-mount .listingPrice__4b50b {
	color: var(--header-primary);
}
#app-mount .title_a81dd3 {								/* sidebar				subtitle							*/
	color: var(--header-primary);
}
#app-mount .skuNormal__1aa9d {								/* sidebar				pricerow							*/
	border-bottom-color: var(--background-modifier-accent);
}
#app-mount .name__71fd4 {								/* sidebar				pricename							*/
	color: var(--header-secondary);
}
#app-mount .sku_e2d34f:hover .name__71fd4 {
	color: var(--header-primary);
}
#app-mount .price_afc9b2 {								/* sidebar				priceamount							*/
	background-color: rgba(var(--transparencycolor_v), .3);
	color: var(--header-primary);
}
#app-mount .label__8394d {								/* sidebar				label								*/
	color: rgb(var(--textdarker_v));
}
#app-mount .info__087e0 {								/* sidebar				labelinfo							*/
	color: var(--header-primary);
}

#app-mount .content__8af7f {								/* invitecard				container							*/
	background-color: rgba(var(--transparencycolor_v), .2);
}
#app-mount .name_d69e36 {								/* invitecard				guildname							*/
	color: var(--header-secondary);
}
#app-mount .memberInfo_a41c1a {								/* invitecard				memberinfo							*/
	color: rgb(var(--textdarker_v));
}

.premiumSubscriptionAccountCredit__6bab4 {						/* abonnements				abocard								*/
	background-color: rgba(var(--transparencycolor_v), .4);
}

#app-mount .row__80d34 {								/* features				row								*/
	background-color: rgba(var(--transparencycolor_v), .2);
	color: var(--header-secondary);
}
#app-mount .featureIcon__67ee4 {							/* features				featureicon							*/
	color: var(--header-secondary);
}


/* ~~~~		9.		LIBRARY						~~~~ */

.header_b5ab54 {									/* library				table header							*/
	background-color: transparent;
	border-bottom-color: var(--background-modifier-accent);
	position: relative;
}
.header_b5ab54::before,
.header_b5ab54::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	pointer-events: none;
	z-index: -1;
}
.header_b5ab54::before {
	background: var(--background_v) var(--backgroundposition_v)/var(--backgroundsize_v);
	background-attachment: fixed;
}
.header_b5ab54::after {
	background-color: rgba(var(--transparencycolor_v), .4);
	backdrop-filter: blur(var(--backgroundblur_v));
}

#app-mount .headerCellSorted__41374 {
	color: var(--header-primary);
}

.rowWrapperActive_f989dd {
	background-color: rgba(var(--transparencycolor_v), .2);
}
.rowWrapper__2d725 + .rowWrapper__2d725 .row_f3cc85 {
	border-top-color: var(--background-modifier-accent);
}

#app-mount .rate__087a0 {
	color: var(--text-muted);
}
#app-mount .background__0a6fb {								/* library				usagebar							*/
	stroke: rgb(var(--transparencycolor_v), .5);
}
#app-mount .usageInfo_a68f86 {								/* gamelibrary				usageinfo							*/
	color: var(--header-secondary);
}

#app-mount .installationPath_fa3a82 {							/* library				game row path							*/
	box-shadow: 0 1px 0 0 var(--background-accent);
}
#app-mount .rowTitle_ec0ae0 {								/* library				game row title							*/
	color: var(--text-normal);
}
#app-mount .rowBody__737e5 {								/* library				game row body							*/
	color: var(--text-muted);
}
#app-mount .defaultLocationCheckbox__39884 {						/* library				location checkbox						*/
	color: var(--header-primary);
}
#app-mount .defaultIndicator__2a4ea {							/* library				location indicator						*/
	background-color: rgba(var(--transparencycolor_v), .5);
	color: var(--header-primary);
}

#app-mount .applicationName__77e6b {							/* library				application name						*/
	color: var(--header-primary);
}
#app-mount .applicationSubText_ea8d9c {							/* library				application subtext						*/
	color: var(--text-muted);
}


/* ~~~~		10.		DISCOVERY/UNIHUB				~~~~ */

#app-mount .pageWrapper_fef757,								/* guilddiscovery			container							*/
#app-mount .pageContainer__1e84a {							/* unihub				container							*/
	color: var(--header-primary);
}
#app-mount .pageWrapper_fef757 .searchBox__88a98,					/* guilddiscovery			searchbox							*/
#app-mount .pageContainer__1e84a .searchBox_bf114a {					/* unihub				searchbox							*/
	background-color: #fff;
}
#app-mount .card__86773,								/* guilddiscovery			card								*/
#app-mount .card__73022 {								/* unihub				card								*/
	background-color: rgba(var(--transparencycolor_v), .3);
}
#app-mount .iconMask__1aff7,								/* guilddiscovery			iconmask							*/
#app-mount .iconMask_f7f012 {								/* unihub				iconmask							*/
	background-color: rgba(var(--transparencycolor_v), .2);
}
#app-mount .card__86773:hover,
#app-mount .iconMask__1aff7:hover,
#app-mount .card__73022:hover,
#app-mount .iconMask_f7f012:hover {
	background-color: rgba(var(--transparencycolor_v), .4);
}
#app-mount .cardPlaceholder__6e28f {							/* guildcard				placeholder							*/
	background-color: rgba(var(--transparencycolor_v), .2);
}
#app-mount .loading_e7a19f {								/* guildcard				loading								*/
	background-color: rgba(var(--transparencycolor_v), .5);
}
.footerImage_b0b86b {
	opacity: .5;
}
.actionButtonsContainer__16c43 {							/* guildcard				action button							*/
	position: relative;
	background: transparent;
}
.actionButtonsContainer__16c43::before,
.actionButtonsContainer__16c43::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	border-radius: 4px;
	pointer-events: none;
}
.actionButtonsContainer__16c43::before {
	background: var(--background_v) var(--backgroundposition_v)/var(--backgroundsize_v);
	background-attachment: fixed;
}
.actionButtonsContainer__16c43::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.25));
	backdrop-filter: blur(var(--backgroundblur_v));
}
.spinner__97e4c {									/* guildcard				loading spinner							*/
	background: transparent;
	transform: none;
	top: calc(50% - 24px);
	left: calc(50% - 24px);
}
.spinner__97e4c::before,
.spinner__97e4c::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	border-radius: 8px;
	pointer-events: none;
}
.spinner__97e4c::before {
	background: var(--background_v) var(--backgroundposition_v)/var(--backgroundsize_v);
	background-attachment: fixed;
}
.spinner__97e4c::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.4));
	backdrop-filter: blur(var(--backgroundblur_v));
}

#app-mount .addEntryCard_d9422a {							/* add entry card											*/
	background-color: rgba(var(--transparencycolor_v),.2);
	border-color: var(--interactive-normal);
}
#app-mount .addEntryCard_d9422a:hover {
	background-color: rgba(var(--transparencycolor_v),.4);
	border-color: var(--interactive-active);
}

.emptyContainer_a4bd05 {								/* search				no results							*/
	background-color: rgba(var(--transparencycolor_v), .4);
}
.placeholder__278ac {									/* search				placeholder							*/
	background-color: rgba(var(--transparencycolor_v), .4);
}


/* ~~~~		11.		USERSETTINGS					~~~~ */

#app-mount .side_b4b3f6 .themed_b957e8.item__48dda:active:not(.disabled__85bca),	/* sideitems												*/
#app-mount .topPill__0cdf1 .themed_b957e8.item__48dda:active:not(.disabled__85bca),	/* tabitems												*/
#app-mount .side_b4b3f6 .themed_b957e8.item__48dda:hover:not(.disabled__85bca),		/* sideitems												*/
#app-mount .topPill__0cdf1 .themed_b957e8.item__48dda:hover:not(.disabled__85bca) {	/* tabitems												*/
	background-color: rgba(var(--transparencycolor_v), .2);
}
#app-mount .side_b4b3f6 .themed_b957e8.selected__5711d.item__48dda,
#app-mount .topPill__0cdf1 .themed_b957e8.selected__5711d.item__48dda,
#app-mount .side_b4b3f6 .themed_b957e8.selected__5711d.item__48dda:active,
#app-mount .topPill__0cdf1 .themed_b957e8.selected__5711d.item__48dda:active,
#app-mount .side_b4b3f6 .themed_b957e8.selected__5711d.item__48dda:hover,
#app-mount .topPill__0cdf1 .themed_b957e8.selected__5711d.item__48dda:hover {
	background-color: rgb(var(--accentcolor_v));
	color: #fff;
	text-shadow: 1px 1px var(--textshadow_v);
}
.sidebar__9e3e2:has(.socialLinks_c1fc99) .side_b4b3f6 .item__48dda::after {
	filter: drop-shadow(1px 1px var(--textshadow_v));
}

.bd-social-link[title="BD" i] .bd-social-logo,
.bd-social-link[title="BetterDiscord" i] .bd-social-logo,
.bd-social-link[title="BBD" i] .bd-social-logo,
.bd-social-link[title="BandagedBD" i] .bd-social-logo {
	background: var(--interactive-normal);
	-webkit-mask: url(https://mwittrien.github.io/BetterDiscordAddons/Themes/_res/svgs/settingsicons/betterdiscord.svg) center/contain no-repeat;
	opacity: 1;
	transition: background .15s ease;
}
.bd-social-link[title="BD" i]:hover .bd-social-logo,
.bd-social-link[title="BetterDiscord" i]:hover .bd-social-logo,
.bd-social-link[title="BBD" i]:hover .bd-social-logo,
.bd-social-link[title="BandagedBD" i]:hover .bd-social-logo {
	background: var(--interactive-active);
}
.bd-social-link[title="BD" i] .bd-social-logo > *,
.bd-social-link[title="BetterDiscord" i] .bd-social-logo > *,
.bd-social-link[title="BBD" i] .bd-social-logo > *,
.bd-social-link[title="BandagedBD" i] .bd-social-logo > * {
	display: none;
}

#app-mount .streamerModeEnabledImage_a0d94f {
	background-image: url(https://discord.com/assets/c133c9df9ee4552c188a.svg);
	opacity: .5;
}

.contentRegion__0bec1 div[role="tabpanel"] {						/* tabpanel												*/
	width: 100%;
}
.toolsContainer_f5d55d {								/* closebutton				wrapper								*/
	margin-right: 37px;
}
#app-mount .closeButton__34341 {							/* closebutton				button								*/
	border-color: var(--channels-default);
}
#app-mount .closeButton__34341 path[fill] {
	fill: var(--channels-default);
}
#app-mount .closeButton__34341:hover {
	background-color: rgba(var(--accentcolor_v), .2);
	border-color: var(--header-secondary);
}
#app-mount .closeButton__34341:hover path[fill] {
	fill: var(--header-secondary);
}
#app-mount .closeButton__34341:active {
	border-color: var(--text-normal);
}
#app-mount .closeButton__34341:active path[fill] {
	fill: var(--text-normal);
}
#app-mount .keybind__57645 {								/* closebutton				keybind								*/
	color: var(--channels-default);
}

#app-mount .closeButtonBold__30e2a {							/* closebutton				button bold							*/
	border-color: var(--header-secondary);
}
#app-mount .closeButtonBold__30e2a path[fill] {
	fill: var(--header-secondary);
}
#app-mount .closeButtonBold__30e2a:hover {
	background-color: rgba(var(--accentcolor_v), .4);
	border-color: var(--text-normal);
}
#app-mount .closeButtonBold__30e2a:hover path[fill] {
	fill: var(--text-normal);
}
#app-mount .closeButtonBold__30e2a:active {
	border-color: var(--header-primary);
}
#app-mount .closeButtonBold__30e2a:active path[fill] {
	fill: var(--header-primary);
}
#app-mount .keybind__57645 {								/* closebutton				keybind bold							*/
	color: var(--header-secondary);
}

.cardPrimary_cb7a0e,
.cardPrimaryEditable__25559 {								/* settingsitems			card								*/
	border-color: rgba(var(--transparencycolor_v), .1);
}
.cardPrimary_cb7a0e {
	background-color: rgba(var(--transparencycolor_v), .2);
}
.cardPrimaryEditable__25559 {
	background-color: rgba(var(--transparencycolor_v), .1);
}
.cardPrimaryOutline__9df8a {
	border-color: rgba(var(--transparencycolor_v), .2);
}

.accountProfileCard__22589 {								/* accountsettings			container							*/
	background: transparent;
	box-shadow: 0 0 0 1px rgba(var(--transparencycolor_v), .3), 0 2px 10px 0 rgba(var(--transparencycolor_v), .3);
}
.accountProfileCard__22589::before,
.accountProfileCard__22589::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	border-radius: 5px;
	pointer-events: none;
	z-index: -1;
}
.accountProfileCard__22589::before {
	background: var(--popout_v) var(--popoutposition_v)/var(--popoutsize_v);
	background-attachment: fixed;
}
.accountProfileCard__22589::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.25));
	backdrop-filter: blur(var(--popoutblur_v));
}
.accountProfileCard__22589 .avatar__6c108 {						/* accountsettings			container avatar						*/
	background-color: transparent;
	border-color: transparent;
}
.questionMark__8d22a svg {								/* accountsettings			questionmark							*/
	filter: drop-shadow(1px 1px var(--textshadow_v));
}
#app-mount .background_b61fcc {								/* accountsettings			container							*/
	background-color: rgba(var(--transparencycolor_v), .2);
}
#app-mount .fieldList_aab0de {								/* accountsettings			settings							*/
	background-color: transparent;
}

.connectContainer__8050b {								/* connections				container							*/
	background-color: rgba(var(--transparencycolor_v), .4);
}
.accountButtonInner__80e3a {								/* connections				connectioninner							*/
	background-color: rgba(var(--transparencycolor_v), .2);
}
.accountButtonInner__80e3a:hover {
	background-color: rgb(var(--accentcolor_v));
}
.connection_fff5f6 {									/* connections				connection							*/
	background-color: rgba(var(--transparencycolor_v), .3);
}
.connectionHeader__3c82d {								/* connections				connection header						*/
	background-color: rgba(var(--transparencycolor_v), .2);
}

.guildHeader__30707 {									/* boostsettings			suggestioncard							*/
	background-color: rgba(var(--transparencycolor_v), .5);
}
.guildSubscriptionSlot_b76fc6 {								/* boostsettings			suggestioncard							*/
	background-color: rgba(var(--transparencycolor_v), .3);
}
.cardWrapper_bc8d2a {									/* boostsettings			suggestioncard							*/
	background-color: rgba(var(--transparencycolor_v), .2);
}
.cardWrapper_bc8d2a:hover {
	background-color: rgba(var(--transparencycolor_v), .4);
}
.cardWrapper_bc8d2a .card__11580,							/* boostsettings			suggestioncard inner						*/
.cardWrapper_bc8d2a .card__11580:hover {
	background-color: transparent;
}
#app-mount .gemIndicatorContainer_b03ca0 {						/* boostsettings			suggestioncard circle						*/
	background-color: transparent;
}
#app-mount .summaryInfo_b57acb {							/* boostsettings			past transactions summary					*/
	color: var(--header-primary);
}
#app-mount .payment__7d702 {								/* boostsettings			past transactions payment					*/
	background-color: transparent;
	color: var(--header-secondary);
}
#app-mount .hoverablePayment__3ea24:hover {
	background-color: rgba(var(--transparencycolor_v), .2);
}
#app-mount .paymentHeader__50c05 {							/* boostsettings			past transactions header					*/
	color: var(--header-primary);
	border-color: var(--background-modifier-accent);
}
#app-mount .expandedInfo__47bad {							/* boostsettings			past transactions expandedinfo					*/
	background-color: rgba(var(--transparencycolor_v), .2);
}
#app-mount .paymentText_deeaf4 {							/* boostsettings			past transactions paymenttext					*/
	color: var(--header-secondary);
}
#app-mount .giftIcon__9d0ce {								/* boostsettings			past transactions gifticon					*/
	color: var(--header-primary);
}
#app-mount .guildHeaderBackground__04920 {
	background-image: url(https://discord.com/assets/467602d632b5f9c1ce4b.svg);
	opacity: .75;
}
#app-mount .emptyGuilds-1cEt2M {
	background-image: url(https://discord.com/assets/33de08d0b379a019874a.svg);
	opacity: .75;
}

#app-mount .paymentPane__9cf01 {							/* boostsettings			past transactions						*/
	background-color: rgba(var(--transparencycolor_v), .3);
	color: var(--header-primary);
}
#app-mount .paginator_e620d3 {								/* boostsettings			past transactions paginator					*/
	background: rgba(var(--transparencycolor_v), .3);
	color: var(--text-muted);
}
#app-mount .bottomDivider_a59d97 {							/* boostsettings			past transactions divider					*/
	border-bottom-color: rgba(var(--transparencycolor_v), .3);
}
#app-mount .tab_b317f5 {								/* boostsettings			past transactions tab						*/
	color: var(--text-muted);
}
#app-mount .externalRowHeader_d353ca {							/* boostsettings			past transactions extenal row					*/
	color: var(--header-secondary);
}

#app-mount .emptyStateImage__3e0a5 {							/* giftinventory			no gifts							*/
	background: url(https://discord.com/assets/b3dd9b1e282fff30af5b.svg);
	opacity: 0.6;
}

#app-mount .codeRedemptionRedirect_bc7f36 {						/* payment				coderedem							*/
	background-color: rgba(var(--transparencycolor_v), .2);
	border-color: rgba(var(--transparencycolor_v), .1);
	color: var(--header-primary);
}

.membershipDialogHouse1__24868 {							/* hypesquad				membershipdialogs						*/
	background-color: rgba(156, 132, 239, .8);
}
.membershipDialogHouse2_e343cb {
	background-color: rgba(244, 123, 103, .8);
}
.membershipDialogHouse3_d0cf09 {
	background-color: rgba(69, 221, 192, .8);
}
.videoWrapper__7b3e0 {
	background-color: rgba(var(--transparencycolor_v), .4);
}

.container__6d33c {									/* voicesettings			voicebarcontainer						*/
	-webkit-mask: url(https://mwittrien.github.io/BetterDiscordAddons/Themes/_res/svgs/common/voice_level_bar.svg);
}
.notches__065e9 {
	background: transparent !important;
}
#app-mount .progress__2cc1d {								/* voicesettings			voicebar							*/
	background-color: rgba(var(--transparencycolor_v), .3);
}
.icon__596c8[src="/assets/6762ed8abdaef6a7f6fc.png"],
.icon__596c8[src="/assets/5af9f85713084d6867a6.png"] {
	-webkit-mask: url(https://discord.com/assets/6762ed8abdaef6a7f6fc.png) center/contain no-repeat;
	background-color: var(--header-primary);
	object-position: -999999px -999999px;
}
.icon__596c8[src="/assets/ea67b1321e3d4154e476.png"],
.icon__596c8[src="/assets/12c09c71eb271a47bcab.png"] {
	-webkit-mask: url(https://discord.com/assets/ea67b1321e3d4154e476.png) center/contain no-repeat;
	background-color: var(--header-primary);
	object-position: -999999px -999999px;
}
.cameraWrapper__1ee6d {									/* voicesettings			video								*/
	background-color: rgba(var(--transparencycolor_v), .2);
	border-color: rgba(var(--transparencycolor_v), .1);
}
.backgroundOptionInner__1477f {								/* voicesettings			background option						*/
	background-color: rgba(var(--transparencycolor_v), .4);
}

.option_a0c054 {									/* overlay				option								*/
	background-color: rgba(var(--transparencycolor_v), .4);
}
.option_a0c054:hover,
.option_a0c054.selected_ea51d6 {
	box-shadow: 0 2px 0 rgba(var(--transparencycolor_v), .3);
}
.disabled_ab18dc {
	color: rgba(var(--transparencycolor_v), .4);
}

#app-mount .row__7a44a {								/* hotkeys				row								*/
	box-shadow: inset 0 -1px 0 var(--background-modifier-accent);
}

#app-mount .card_dc88cd::before {							/* settingscard				backdrop							*/
	background-color: rgba(var(--transparencycolor_v), .2);
	border-color: rgba(var(--transparencycolor_v), .1);
}
#app-mount .button__71a0f {								/* settingscard				removebutton							*/
	background-color: rgba(var(--transparencycolor_v), .3);
	box-shadow: 0 0 0 1px rgba(var(--transparencycolor_v), .6), 0 1px 5px 0 rgba(var(--transparencycolor_v), .3);
}
#app-mount .button__71a0f:hover {
	background-color: rgba(var(--transparencycolor_v), .7);
}

#app-mount .game__19f4b {								/* games				card								*/
	box-shadow: 0 1px 0 0 var(--background-modifier-accent);
}
#app-mount .gameNameInput_e25dd8:focus,
#app-mount .gameNameInput_e25dd8:hover {
	background-color: rgba(var(--transparencycolor_v), .3);
	border-color: rgba(var(--transparencycolor_v), .1);
}
#app-mount .gameName_aeeab5 {								/* games				gamename							*/
	color: var(--header-primary);
}
#app-mount .lastPlayed_accc56,								/* games				lastplayed							*/
#app-mount .overlayStatusText__61367 {							/* games				overlaystatustext						*/
	color: var(--text-muted);
}
#app-mount .toggleIconOn_ca5bbe .fill__80e66 {						/* games				overlaystatusicon						*/
	fill: var(--text-muted);
}
#app-mount .nowPlayingAdd__7caf1 {							/* games				descriptionhint							*/
	color: var(--header-secondary);
}
#app-mount .nowPlaying__353c3 .gameName_aeeab5 {
	color: #fff;
}
#app-mount .nowPlaying__353c3 .lastPlayed_accc56,
#app-mount .nowPlaying__353c3 .overlayStatusText__61367 {
	color: #b4e1cd;
}
#app-mount .nowPlaying__353c3 .toggleIconOff_b79a58 .fill__80e66,
#app-mount .nowPlaying__353c3 .toggleIconOn_ca5bbe .fill__80e66 {
	fill: #b4e1cd;
}
#app-mount .notDetected__2a0c9 {							/* games				nogame								*/
	background-color: rgba(var(--transparencycolor_v), .3);
}
#app-mount .notDetected__2a0c9 .lastPlayed_accc56 {
	color: var(--header-secondary);
}

#app-mount .addGamePopout_e4ca8f {							/* games				add game popout							*/
	background-color: transparent;
}
.addGamePopout_e4ca8f::before,
.addGamePopout_e4ca8f::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	pointer-events: none;
	z-index: -1;
}
.addGamePopout_e4ca8f::before {
	background: var(--popout_v) var(--popoutposition_v)/var(--popoutsize_v);
	background-attachment: fixed;
}
.addGamePopout_e4ca8f::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.15));
	backdrop-filter: blur(var(--popoutblur_v));
}
#app-mount .addGamePopout_e4ca8f .cancelButton_b97995 {
	color: var(--header-primary);
}

.preview_f42b5d {									/* appearance				preview								*/
	background-color: rgba(var(--transparencycolor_v), .2);
	border-color: rgba(var(--transparencycolor_v), .2);
}


/* ~~~~		12.		GUILDSETTINGS					~~~~ */

.container__467eb {									/* settings				confirmnotice							*/
	position: relative;
	backdrop-filter: blur(var(--backgroundblur_v));
}
.container__467eb[style*="background-color: rgba(248, 249, 249"],
.container__467eb[style*="background-color: rgba(32, 34, 37"] {
	background-color: rgba(var(--transparencycolor_v), .7) !important;
}
.container__467eb[style*="background-color: rgba(248, 249, 249"] .message__13e98,
.container__467eb[style*="background-color: rgba(32, 34, 37"] .message__13e98 {
	color: var(--header-primary) !important;
}
.container__467eb[style*="background-color: rgba(248, 249, 249"] .resetButton__7ae69 span[style],
.container__467eb[style*="background-color: rgba(32, 34, 37"] .resetButton__7ae69 span[style] {
	color: var(--header-primary) !important;
}
.container__467eb::before {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	background: var(--background_v) var(--backgroundposition_v)/var(--backgroundsize_v);
	background-attachment: fixed;
	pointer-events: none;
	z-index: -1;
}

.roles__2b5cf {										/* rolesettings				intro roles							*/
	z-index: 2;
}
.profileCard__03b33 {									/* rolesettings				intro profile							*/
	position: relative;
	z-index: 1;
}
.profileCard__03b33::before,
.profileCard__03b33::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	pointer-events: none;
	z-index: -1;
}
.profileCard__03b33::before {
	background: var(--popout_v) var(--popoutposition_v)/var(--popoutsize_v);
	background-attachment: fixed;
}
.profileCard__03b33::after {
	backdrop-filter: blur(var(--popoutblur_v));
}
.sidebar_bdf6b7 {									/* rolesettings				sidebar								*/
	background-color: rgba(var(--transparencycolor_v), .1);
	border: none;
}
.container_d5f6d0 {									/* rolesettings				everyone role							*/
	background-color: rgba(var(--transparencycolor_v), .2);
}
.container_d5f6d0:hover {
	background-color: rgba(var(--transparencycolor_v), .4);
}
.settingCard__00567 {									/* rolesettings				setting card							*/
	background-color: rgba(var(--transparencycolor_v), .2);
}
.settingCard__00567.active__898cd {							/* rolesettings				setting card active						*/
	background-color: rgba(var(--transparencycolor_v), .3);
}
.cardFolder__34393 {									/* rolesettings				setting card body						*/
	background-color: transparent;
}
.group__6ae8b {										/* rolesettings				permissions group						*/
	border-color: rgb(var(--transparencycolor_v), .4);
}
.item_f48d11 {										/* rolesettings				permissions item						*/
	background: rgb(var(--transparencycolor_v), .2);
}
.item_f48d11:hover {
	background: rgb(var(--transparencycolor_v), .4);
}
.passthrough__7cd54.selected__47401 {							/* rolesettings				permissions passthrough selected				*/
	background: rgb(var(--accentcolor_v));
}
.icon__4c736 {										/* rolesettings				everyone role icon						*/
	background-color: rgba(var(--transparencycolor_v), .4);
}
.titleContainer_e558ff,									/* rolesettings				roles list header						*/
.header__63c59 {									/* rolesettings				perms list header						*/
	background-color: transparent;
}
.titleElevated__6a163,
.stickyHeaderElevated__89bcf {
	box-shadow: none;
}
.header__63c59::before,
.header__63c59::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	pointer-events: none;
	z-index: -1;
}
.header__63c59::before {
	background: var(--background_v) var(--backgroundposition_v)/var(--backgroundsize_v);
	background-attachment: fixed;
}
.header__63c59::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v)));
	backdrop-filter: blur(var(--backgroundblur_v));
}
.roleRow_c357d5:hover:not(.roleRowDisableHover__9fe35) {				/* rolesettings				role row							*/
	background-color: rgba(var(--transparencycolor_v), .2);
}
.roleRow_c357d5:hover:not(.roleRowDisableHover__9fe35) .circleButton__29ce2 {
	background-color: rgba(var(--transparencycolor_v), .2);
}
.roleRow_c357d5:hover:not(.roleRowDisableHover__9fe35) .circleButton__29ce2:hover {
	background-color: rgb(var(--accentcolor_v));
}
.roleRow_c357d5:before,
.roleRow_c357d5:last-child:after {
	background-color: var(--background-modifier-accent);
}
.memberRow__91c35:hover {								/* rolesettings				member row							*/
	background-color: rgba(var(--transparencycolor_v), .2);
}
#app-mount .colorPickerSwatch__87597.noColor_bf5131 {					/* rolesettings				colorswatch nocolor						*/
	border-color: rgba(var(--textbrightest_v), .3);
}
#app-mount .colorPickerSwatch__87597.noColor_bf5131 .colorPickerDropperFg__72d34 {
	fill: var(--header-primary);
}
#app-mount .colorPickerSwatch__87597.noColor_bf5131 polyline {
	stroke: var(--header-primary);
}
.previewContainer_d2b616 {								/* rolesettings				preview								*/
	border: none;
}
#app-mount .dragged__76dd2 {								/* rolesettings				dragged								*/
	-webkit-mask: url(https://discord.com/assets/038a865e09c25dc13e30.svg) center/contain no-repeat;
	background: var(--background-tertiary);
}
.messageContainer__18275 {								/* rolesettings				preview message							*/
	background-color: rgba(var(--transparencycolor_v), .2);
}
.theme-light .messageContainer__18275 {
	display: none;
}
.addMemberRow_d14116.selectedRow__754b4 {						/* rolesettings				add member row							*/
	background-color: rgba(var(--transparencycolor_v), .2);
}

#app-mount .emojiRow__4661c:hover .emojiAliasPlaceholderContent_ea7491,			/* emojisettings			alias								*/
#app-mount .emojiRow__4661c:focus-within .emojiAliasPlaceholderContent_ea7491 {
	visibility: hidden !important;
	color: transparent !important;
}
#app-mount .emojiAliasInput_dd55f7 .emojiInput__4fe54 {					/* emojisettings			nameinput							*/
	background-color: rgba(var(--transparencycolor_v), .1);
}

#app-mount .auditLog__6c805 {								/* auditlogs				logitem								*/
	border-color: rgba(var(--transparencycolor_v), .1);
	color: var(--text-muted);
}
#app-mount .headerClickable_c4d7a9,							/* auditlogs				loginner							*/
#app-mount .headerDefault__3e003 {
	background-color: rgba(var(--transparencycolor_v), .2);
	color: var(--header-secondary);
}
#app-mount .headerExpanded__03c29 {
	background-color: rgba(var(--transparencycolor_v), .3);
	color: var(--header-secondary);
}
#app-mount .divider__1505d {								/* auditlogs				loginnerdivider							*/
	background-color: var(--background-modifier-accent);
}
#app-mount .changeDetails_ecd760 {							/* auditlogs				logdetails							*/
	background-color: rgba(var(--transparencycolor_v), .2);
}
#app-mount .userHook_b1bf70 {								/* auditlogs				userhook							*/
	color: var(--header-primary);
}
#app-mount .auditLog__6c805 strong {							/* auditlogs				targets								*/
	color: var(--header-primary);
}
#app-mount .timestamp__2f935 {								/* auditlogs				timestamp							*/
	color: var(--text-muted);
}
#app-mount .expandForeground_c53c75 {							/* auditlogs				expandarrow							*/
	stroke: var(--header-secondary);
}
.themeOverrideLight__48338.icon__99140,							/* auditlogs				logicon								*/
.themeOverrideDark_e29cce.icon__99140,
#app-mount .icon__99140 {
	background: none !important;
}
.icon__99140::before {
	content: "";
	position: absolute;
	top: 0;
	left: 0;
	right: 0;
	bottom: 0;
	background: var(--header-primary);
}
.icon__99140.applicationCommand__0aaef::before {
	-webkit-mask: url(https://discord.com/assets/295610bf2d3ec357b4bb.svg);
}
.icon__99140.autoModerationBlockMessage__473dc::before {
	-webkit-mask: url(https://discord.com/assets/2cb2c7601c0b9a2a1ccd.svg);
}
.icon__99140.autoModerationRule__66a81::before {
	-webkit-mask: url(https://discord.com/assets/2cb2c7601c0b9a2a1ccd.svg);
}
.icon__99140.targetAll__6358b::before {
	-webkit-mask: url(https://discord.com/assets/cda90da758440b5e2cbc.svg);
}
.icon__99140.targetBan__28b70::before {
	-webkit-mask: url(https://discord.com/assets/559f43e29d80d719b397.svg);
}
.icon__99140.targetChannel__62934::before {
	-webkit-mask: url(https://discord.com/assets/fd8bb90a4678f63f6a50.svg);
}
.icon__99140.targetEmoji__499cd::before {
	-webkit-mask: url(https://discord.com/assets/b734b6798a8b89611ee7.svg);
}
.icon__99140.targetGuild__170a1::before {
	-webkit-mask: url(https://discord.com/assets/30039d24e09f9ae53597.svg);
}
.icon__99140.targetGuildHome__8d852::before {
	-webkit-mask: url(https://discord.com/assets/bde25f93c922e02f8459.svg);
}
.icon__99140.targetGuildScheduledEvent_eefa31::before {
	-webkit-mask: url(https://discord.com/assets/119b4083c9d4fce05f2d.svg);
}
.icon__99140.targetIntegration_f4a496::before {
	-webkit-mask: url(https://discord.com/assets/a82903ac1478ed97b6d4.svg);
}
.icon__99140.targetInvite__46153::before {
	-webkit-mask: url(https://discord.com/assets/5cc5c2e0ad18a7c383d8.svg);
}
.icon__99140.targetMember__27dad::before {
	-webkit-mask: url(https://discord.com/assets/c53abf7172caf6e94497.svg);
}
.icon__99140.targetMemberRole__7fd6d::before {
	-webkit-mask: url(https://discord.com/assets/63a73b3d5daccfd7a8fc.svg);
}
.icon__99140.targetMessage__0ca53::before {
	-webkit-mask: url(https://discord.com/assets/f88edd51273b2e14999a.svg);
}
.icon__99140.targetPermission_a619b3::before {
	-webkit-mask: url(https://discord.com/assets/93b984f7ed0c42796562.svg);
}
.icon__99140.targetRole_f0db36::before {
	-webkit-mask: url(https://discord.com/assets/842d46ac28c4cc831849.svg);
}
.icon__99140.targetStageInstance_f9d669::before {
	-webkit-mask: url(https://discord.com/assets/f39f5d92d79071dcd992.svg);
}
.icon__99140.targetSticker__18d72::before {
	-webkit-mask: url(https://discord.com/assets/0020113abbe97807c0be.svg);
}
.icon__99140.targetVanityUrl_d8b24a::before {
	-webkit-mask: url(https://discord.com/assets/9ecac67adfc57255096c.svg);
}
.icon__99140.targetWebhook__5177a::before {
	-webkit-mask: url(https://discord.com/assets/2cb2c7601c0b9a2a1ccd.svg);
}
.icon__99140.targetWidget_aaaf18::before {
	-webkit-mask: url(https://discord.com/assets/fb3b404502ba18187ace.svg);
}
.icon__99140.thread_a2b0da::before {
	-webkit-mask: url(https://discord.com/assets/6960c3e51b7f0dcefcc0.svg);
}

#app-mount .card_fd0d59 {								/* integrationsettings			card								*/
	border-color: rgba(var(--transparencycolor_v), .1)
}
#app-mount .card__05cf8 {								/* integrationsettings			webhook card							*/
	border-color: rgba(var(--transparencycolor_v), .1)
}
#app-mount .card__39d1a {								/* integrationsettings			apps card							*/
	border-color: rgba(var(--transparencycolor_v), .1)
}
#app-mount .card__78185 {								/* integrationsettings			follows card							*/
	border-color: rgba(var(--transparencycolor_v), .1)
}
#app-mount .iconWrapper__8fbb1 {							/* integrationsettings			icon								*/
	background-color: rgba(var(--transparencycolor_v), .4);
}

.guildDetails_fc2c63 {									/* communitysettings			intro				details				*/
	background-color: rgba(var(--transparencycolor_v), .4);
}
.featureCard__0a441 {									/* communitysettings			intro				featurecard			*/
	background-color: rgba(var(--transparencycolor_v), .3);
}
.featureIcon__48a2c {									/* communitysettings			intro				featureicon			*/
	background-color: rgba(var(--transparencycolor_v), .3);
}

.upsellContainer__978df {								/* communitysettings			general				upsellcontainer			*/
	background-color: rgba(var(--transparencycolor_v), .2);
}
.upsellFooter__63475 {									/* communitysettings			general				upsellfooter			*/
	background-color: rgba(var(--transparencycolor_v), .2);
}

.developerPortalCtaWrapper__21172 {							/* communitysettings			analytics			info				*/
	background-color: rgba(var(--transparencycolor_v), .3);
}
.analyticsCard_a976ba {									/* communitysettings			analytics			card				*/
	background-color: rgba(var(--transparencycolor_v), .3);
}

#app-mount .card__81c50 {								/* communitysettings			discovery			card				*/
	background-color: rgba(var(--transparencycolor_v), .3);
}
#app-mount .iconMask_c8b196 {								/* communitysettings			discovery			icon				*/
	background-color: rgba(var(--transparencycolor_v), .2);
}
.splashImage_bfd001[src="/assets/467602d632b5f9c1ce4b.svg"],
.splashImage_bfd001[src="/assets/d4d9f2bff23beec65b1f.svg"] {
	background: url(https://discord.com/assets/467602d632b5f9c1ce4b.svg) center/cover no-repeat;
	opacity: .75;
	object-position: -999999px -999999px;
}
.container__0d7bc {									/* communitysettings			discovery			checklist			*/
	background-color: rgba(var(--transparencycolor_v), .3);
}
.header_d08072 {									/* communitysettings			discovery			checklist header		*/
	background-color: rgba(var(--transparencycolor_v), .3);
}

.descriptionBox_cca0c3 {								/* templatesettings			descriptionbox							*/
	background-color: rgba(var(--transparencycolor_v), .3);
}

#app-mount .tierHeaderLocked__4d099 {							/* boostsettings			tierheaderlocked						*/
	background-color: rgba(var(--transparencycolor_v), .4);
	color: var(--header-secondary);
}
#app-mount .tierHeaderUnlocked_cc60fa {							/* boostsettings			tierheaderunlocked						*/
	background-color: rgba(var(--transparencycolor_v), .5);
}
#app-mount .tierCloseClose_b6b875 {							/* boostsettings			tiercloseclose							*/
	color: var(--header-primary);
}
#app-mount .tierBody__615a1 {								/* boostsettings			tierbody							*/
	background-color: rgba(var(--transparencycolor_v), .3);
	color: var(--header-secondary);
}
#app-mount .tierInProgress_f08e8b {							/* boostsettings			tiermilestone							*/
	background-color: rgba(var(--transparencycolor_v), .3);
}
#app-mount .background__3dd67 {								/* boostsettings			tierbar	(settings)						*/
	color: rgba(var(--transparencycolor_v), .3);
}

#app-mount .member__55269 {								/* membersettings			membercard							*/
	box-shadow: 0 1px 0 0 var(--background-modifier-accent);
}
#app-mount .member__55269 .name__7635a {						/* membersettings			membercardname							*/
	color: var(--header-primary);
}
#app-mount .member__55269 .tag__1a537 {							/* membersettings			membercardtag							*/
	color: var(--text-muted);
}
#app-mount .member__55269 .roleWrapper__0f174 {						/* membersettings			rolewrapper							*/
	color: rgba(var(--textbrightest_v),.8);
}
#app-mount .actionButton__81eaa {							/* membersettings			addrolebutton							*/
	border-color: var(--header-secondary);
	color: var(--header-secondary);
}
#app-mount .member__55269 .overflowIconFg__2b31c {					/* membersettings			3-dot icon							*/
	fill: var(--header-primary);
}
#app-mount .member__55269 .ownerHelpIcon__021a4 {					/* membersettings			help icon							*/
	color: var(--header-primary);
}

#app-mount .overflowRolesPopout__88ab9,							/* membersettings			roleoverflow popout						*/
#app-mount .overflowRolesPopoutArrow_f3db31 {
	background-color: transparent;
	box-shadow: 0 0 0 1px rgba(var(--transparencycolor_v), .2), 0 2px 10px 0 rgba(var(--transparencycolor_v), .2);
	border: none;
	border-radius: 3px;
	overflow: hidden;
}
.overflowRolesPopout__88ab9::before,
.overflowRolesPopoutArrow_f3db31::before,
.overflowRolesPopout__88ab9::after,
.overflowRolesPopoutArrow_f3db31::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	pointer-events: none;
	z-index: -1;
}
.overflowRolesPopout__88ab9::before,
.overflowRolesPopoutArrow_f3db31::before {
	background: var(--popout_v) var(--popoutposition_v)/var(--popoutsize_v);
	background-attachment: fixed;
}
.overflowRolesPopout__88ab9::after,
.overflowRolesPopoutArrow_f3db31::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.1));
	backdrop-filter: blur(var(--popoutblur_v));
}
.overflowRolesPopoutHeaderIcon__07f88 path {
	fill: var(--header-secondary);
}
.overflowRolesPopoutHeaderText_dabff2 {
	color: var(--header-secondary);
}

#app-mount .to_d0a2ea {									/* membersettings			transfer to							*/
	background-color: rgba(var(--transparencycolor_v), .3);
	box-shadow: 0 0 0 4px rgba(var(--transparencycolor_v), .3);
}
#app-mount .fromToWrapper__2c6f3 {
	background: transparent;
}
#app-mount .fromToWrapper__2c6f3::before {
	content: "";
	position: absolute;
	top: 0;
	right: 0;
	bottom: 0;
	left: 0;
	-webkit-mask: url(https://discord.com/assets/a2e6c7df5d20d1aeaacb.svg) 50% 0 no-repeat;
	background: var(--header-primary);
}

#app-mount .inviteSettingsInviteRow__0d747 {						/* invitesettings			invitecard							*/
	box-shadow: 0 1px 0 0 var(--background-modifier-accent);
}

#app-mount .bannedUser__38b44 {								/* bansettings				bancard								*/
	background-color: transparent;
	box-shadow: 0 1px 0 0 var(--background-modifier-accent);
}
#app-mount .bannedUser__38b44:hover {
	background-color: rgba(var(--transparencycolor_v), .3);
}


/* ~~~~		13.		MODALS						~~~~ */

.layer_ad604d:nth-child(1),
.withLayer__1fe9d:nth-child(1) {
	z-index: 1002;
}
.layer_ad604d:nth-child(2),
.withLayer__1fe9d:nth-child(2) {
	z-index: 1003;
}
.layer_ad604d:nth-child(3),
.withLayer__1fe9d:nth-child(3) {
	z-index: 1004;
}
.layer_ad604d:nth-child(4),
.withLayer__1fe9d:nth-child(4) {
	z-index: 1005;
}
.layer_ad604d:nth-child(5),
.withLayer__1fe9d:nth-child(5) {
	z-index: 1006;
}
.layer_ad604d:nth-child(6),
.withLayer__1fe9d:nth-child(6) {
	z-index: 1007;
}
.layer_ad604d:nth-child(7),
.withLayer__1fe9d:nth-child(7) {
	z-index: 1008;
}
.layer_ad604d:nth-child(8),
.withLayer__1fe9d:nth-child(8) {
	z-index: 1009;
}
.layer_ad604d:nth-child(9),
.withLayer__1fe9d:nth-child(9) {
	z-index: 1010;
}
.layer_ec16dd {
	z-index: 1011;
}

#app-mount .root_a28985:not(.noBackground_ebd8f7),					/* modal				container (foldersettings)					*/
#app-mount .modal__060da {								/* modal				container							*/
	background-color: transparent;
	box-shadow: 0 0 0 1px rgba(var(--transparencycolor_v), .3), 0 2px 10px 0 rgba(var(--transparencycolor_v), .3);
	position: relative;
	border-radius: 5px;
	transform: unset !important;
}
#app-mount .rootWithShadow__073a7:not(.noShadow__49254) {
	box-shadow: 0 0 0 1px rgba(var(--transparencycolor_v), .3), 0 2px 10px 0 rgba(var(--transparencycolor_v), .3);
}
.root_a28985 > *,
.modal__060da > * {
	z-index: 1;
}
.root_a28985::before,
.modal__060da::before,
.root_a28985::after,
.modal__060da::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	border-radius: 5px;
	pointer-events: none;
	z-index: -1;
}
.root_a28985::before,
.modal__060da::before {
	background: var(--popout_v) var(--popoutposition_v)/var(--popoutsize_v);
	background-attachment: fixed;
}
.root_a28985::after,
.modal__060da::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.2));
	backdrop-filter: blur(var(--popoutblur_v));
}
.root_a28985 .modal__060da::before,
.root_a28985.noBackground_ebd8f7::before,
.modal_d2e7a7::before,
.root_a28985 .modal__060da::after,
.root_a28985.noBackground_ebd8f7::after,
.modal_d2e7a7::after {
	display: none;
}
#app-mount .zoomedCarouselModalRoot__1e2da {
	background: transparent !important;
}
#app-mount .modalTextContainer_ddfc28 {							/* modal				text file							*/
	background-color: rgba(var(--transparencycolor_v), .5);
	border: none;
}
#app-mount .footer__89240,
#app-mount .footer__09373 {								/* modal				footer								*/
	background-color: rgba(var(--transparencycolor_v), .2);
	z-index: 0;
}
#app-mount .footerSeparator__57d95 {
	box-shadow: none;
}

.tabBarContainer__63f55 {								/* modal				tabbarcontainer							*/
	border-top-color: rgba(var(--transparencycolor_v), .3);
}
#app-mount .modal_6GHvdM .tabBarContainer__63f55 {
	background: rgba(var(--transparencycolor_v), .2);
	box-shadow: 0 2px 3px 0 rgba(var(--transparencycolor_v), .1);
}

#app-mount .content_ab56e9 + .videoContainer_a9d080 {
	box-sizing: border-box;
	height: 100%;
}
#app-mount .testimonialContainer__3e4a3 path[fill="#2B2D31"] {
	fill: var(--background-secondary);
}
#app-mount .testimonialContainer__3e4a3 .quotes__35cf8 {
	color: var(--header-secondary);
}

#app-mount .separator_ff09cd {
	box-shadow: 0 1px 0 0 rgba(var(--transparencycolor_v),.3), 0 1px 2px 0 rgba(var(--transparencycolor_v),.3);
}
#app-mount .divider__1464c {
	border-color: var(--background-modifier-accent);
}

#app-mount .message__3ad07 {
	color: var(--header-secondary);
}
#app-mount .secondaryButton_e0812e {
	color: var(--header-primary);
}
#app-mount .imageUpgrade__02fcc {
	background-image: url(https://discord.com/assets/7e81dd54960672eabe78.svg);
}
#app-mount .imageCancel_e3036f {
	background: url(https://discord.com/assets/d12b5c285831f85c5eee.svg);
}
#app-mount .imageUnclaimed__3f7ec {
	background-image: url(https://discord.com/assets/41675689ca055858e137.svg);
	opacity: .5;
}
#app-mount .imageUnverified__6dc24 {
	background-image: url(https://discord.com/assets/f0cba42b6a6d3b2de4fd.svg);
	opacity: .5;
}

#app-mount .divider__17151 {
	border-color: var(--background-modifier-accent);
}
#app-mount .backButtonColor_ceeab9 {
	color: var(--header-primary);
}
#app-mount .checkboxLabel__56eeb {
	color: var(--header-secondary);
}

/* ----		13.1.		USERMODAL					----- */

.listRow__60937:hover {
	background-color: rgba(var(--transparencycolor_v), .2);
}
.emptyIcon__655a1 {									/* body					emptypic							*/
	opacity: .5;
}
.profileColors__2e2f0 .mask__1979f circle {
	fill: transparent;
}

/* ----		13.2.		GUILDADD/CREATION				----- */

.container__73245,									/* create modal				item								*/
.guildRow_b1c31c {									/* hub modal				item								*/
	background-color: rgb(var(--transparencycolor_v), .2);
	border: none;
}
.container__73245:hover,
.guildRow_b1c31c:hover {
	background-color: rgb(var(--transparencycolor_v), .4);
}
.text__43e5f,										/* create modal				text								*/
.guildName_e8fc4b {									/* hub modal				text								*/
	color: var(--header-secondary);
}
.container__73245:hover .text__43e5f,
.guildRow_b1c31c:hover .guildName_e8fc4b {
	color: var(--header-primary);
}
.arrow__5e540,										/* create modal				arrow								*/
.guildName_e8fc4b ~ img {								/* hub modal				arrow								*/
	object-position: -999999px -999999px;
	-webkit-mask: url(https://discord.com/assets/ebd4163d89c2d849ec54.svg) center/cover no-repeat;
	background: var(--header-secondary);
}
.container__73245:hover .arrow__5e540,
.guildRow_b1c31c:hover .guildName_e8fc4b ~ img {
	background: var(--header-primary);
}
.input__0c269 {										/* modal				invite input							*/
	background: transparent;
}
.inputInner__2e566 {									/* modal				invite input inner						*/
	border: 1px solid var(--deprecated-text-input-border);
}

/* ----		13.3.		UPLOADMODAL					---- */

#app-mount .uploadModal_eae2a0 {							/* modal				container							*/
	background-color: transparent;
	box-shadow: 0 0 0 1px rgba(var(--transparencycolor_v), .3), 0 2px 10px 0 rgba(var(--transparencycolor_v), .3);
	position: relative;
	border-radius: 10px;
}
.uploadModal_eae2a0::before,
.uploadModal_eae2a0::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	border-radius: 10px;
	pointer-events: none;
	z-index: -1;
}
.uploadModal_eae2a0::before {
	background: var(--popout_v) var(--popoutposition_v)/var(--popoutsize_v);
	background-attachment: fixed;
}
.uploadModal_eae2a0::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.2));
	backdrop-filter: blur(var(--popoutblur_v));
}

.uploadModalIn_c0ca4b .uploadDropModal__73a36 {
	width: unset;
}
.uploadModalIn_c0ca4b .uploadDropModal__73a36 .inner__7afe9 .title__73a49,
.uploadModalIn_c0ca4b .uploadDropModal__73a36 .inner__7afe9 .instructions__9e259 {
	text-shadow: 1px 1px var(--textshadow_v);
}
.uploadModal_eae2a0 .inner__7afe9 {							/* modal				channeltextarea							*/
	background-color: rgba(var(--transparencycolor_v), .3);
}
.uploadModal_eae2a0 .footer_ceda43 {							/* modal				footer								*/
	background-color: rgba(var(--transparencycolor_v), .2);
	box-shadow: none;
}
.uploadModal_eae2a0 .inner__7afe9 .file_f309f6 .icon__25b13.image__00ac0 {
	box-shadow: 0 2px 8px rgba(var(--transparencycolor_v), .4);
}

/* ----		13.4.		KEYBOARDSHORTCUTSMODAL				---- */

#app-mount .keyboardShortcutsModal__74c71 {						/* modal				container							*/
	background-color: transparent;
	box-shadow: 0 0 0 1px rgba(var(--transparencycolor_v), .3), 0 2px 10px 0 rgba(var(--transparencycolor_v), .3);
	position: relative;
	overflow: hidden;
}
.keyboardShortcutsModal__74c71::before,
.keyboardShortcutsModal__74c71::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	pointer-events: none;
	z-index: -1;
}
.keyboardShortcutsModal__74c71::before {
	background: var(--popout_v) var(--popoutposition_v)/var(--popoutsize_v);
	background-attachment: fixed;
}
.keyboardShortcutsModal__74c71::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.2));
	backdrop-filter: blur(var(--popoutblur_v));
}
#app-mount .modalTitle_cf2de1 {								/* modal				title								*/
	color: var(--header-primary);
}
#app-mount .modalSubtitle__40325 {							/* modal				subtitle							*/
	border-color: var(--background-modifier-accent);
	color: var(--text-normal);
}
#app-mount .keyboardShortcutList__1f357 .keybindGroup_bd18f5 .keybindDescription__74fa6 {
	color: var(--header-secondary);
}
#app-mount .combo__57290 {
	color: var(--header-primary);
}
#app-mount .combo__57290 .key__06fe6 {
	background-color: var(--text-muted);
	border: 1px solid rgba(0, 0, 0, .4);
	box-shadow: inset 0 -4px 0 rgba(0, 0, 0, .4);
	color: var(--header-primary);
}
#app-mount .combo__57290 .key__06fe6:active {
	box-shadow: inset 0 -2px 0 rgba(0, 0, 0, .6);
	border: 1px solid rgb(0, 0, 0);
	color: var(--header-secondary);
}

/* ----		13.5.		QUICKSWITCHER					---- */

#app-mount .quickswitcher_a3d29a {							/* modal				container							*/
	background-color: transparent;
	box-shadow: 0 0 0 1px rgba(var(--transparencycolor_v), .3), 0 2px 10px 0 rgba(var(--transparencycolor_v), .3);
	position: relative;
	overflow: hidden;
	flex: 1 1 auto;
}
.quickswitcher_a3d29a::before,
.quickswitcher_a3d29a::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	pointer-events: none;
	z-index: -1;
}
.quickswitcher_a3d29a::before {
	background: var(--popout_v) var(--popoutposition_v)/var(--popoutsize_v);
	background-attachment: fixed;
}
.quickswitcher_a3d29a::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.2));
	backdrop-filter: blur(var(--popoutblur_v));
}
#app-mount .emptyState_afda24 {
	background: transparent;
}
#app-mount .emptyState_afda24::before {
	content: "";
	position: absolute;
	top: 0;
	right: 0;
	bottom: 0;
	left: 0;
	background: url(https://discord.com/assets/c586aac99de98cfb010d.svg) center/100px no-repeat;
	opacity: .5;
}
.root_a28985 .quickswitcher_a3d29a::before,
.root_a28985 .quickswitcher_a3d29a::after {
	display: none;
}
.scroller__52ae7 {
	background-color: transparent;
}
#app-mount .input__848cd {								/* modal				input								*/
	background-color: rgba(var(--transparencycolor_v), .4);
	box-shadow: 0 2px 10px 0 rgba(var(--transparencycolor_v), .3);
}
#app-mount .result__25f11[aria-selected=true] {						/* modal				resultselected							*/
	background-color: rgba(var(--transparencycolor_v), .2);
}

/* ----		13.6.		INVITEMODAL/GROUPCREATE				---- */

#app-mount .contentWrapper__85d37 {							/* modal				guildinvitemodal						*/
	background-color: transparent;
	box-shadow: 0 0 0 1px rgba(var(--transparencycolor_v), .3), 0 2px 10px 0 rgba(var(--transparencycolor_v), .3);
	position: relative;
	overflow: hidden;
}
.contentWrapper__85d37::before,
.contentWrapper__85d37::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	pointer-events: none;
	z-index: -1;
}
.contentWrapper__85d37::before {
	background: var(--popout_v) var(--popoutposition_v)/var(--popoutsize_v);
	background-attachment: fixed;
}
.contentWrapper__85d37::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.2));
	backdrop-filter: blur(var(--popoutblur_v));
}

#app-mount .friendSelected_f0db37,							/* modal				groupdmrow							*/
#app-mount .inviteRow_a25947:hover {							/* modal				guildrow							*/
	background-color: rgba(var(--transparencycolor_v), .2);
}
#app-mount .friend__05c43,								/* modal				groupdmrow							*/
#app-mount .inviteRowName_bc8b23 {							/* modal				username							*/
	color: var(--header-secondary);
}
#app-mount .friendSelected_f0db37,
#app-mount .inviteRow_a25947:hover .inviteRowName_bc8b23 {
	color: var(--header-primary);
}
#app-mount .checkBoxLabel__29660,
#app-mount .footerText__614f3,
#app-mount .subtitle__593cd,
#app-mount .subText__9988c {
	color: var(--header-secondary);
}
.tag__69d9d {										/* modal				added user							*/
	background-color: rgb(var(--accentcolor_v));
	color: #fff;
	text-shadow: 1px 1px var(--textshadow_v);
}
.pill_c0440d {
	background-color: rgba(var(--transparencycolor_v), .5);
}
#app-mount .notFriends__778a1 .errorStateIcon__7edd8 {
	background-image: url(https://discord.com/assets/07aa1f325ebe8b8af5cb.svg);
	opacity: 0.6;
}
#app-mount .noFriends_a7f7ca .errorStateIcon__7edd8 {
	background-image: url(https://discord.com/assets/adfe130868d2bcf467b5.svg);
	opacity: 0.6;
}
#app-mount .partyFull_c6b62b .errorStateIcon__7edd8 {
	background-image: url(https://discord.com/assets/53d74eda11a4185c1acd.svg);
	opacity: 0.6;
}
#app-mount .noResults_c69767 .errorStateIcon__7edd8 {
	background-image: url(https://discord.com/assets/c8718df1382ba878f1fc.svg);
	opacity: 0.6;
}

/* ----		13.7.		LOGINSCREEN					---- */

#app-mount .wrapper_eebc2d {								/* login				wrapper								*/
	background: transparent;
}
.wrapper_eebc2d::before,								/* login				winbuttonshadow							*/
.wrapper_eebc2d .rightSplit__46a42,							/* login				background							*/
.wrapper_eebc2d .canvas_c398ff {							/* login				movingshadow							*/
	display: none;
}
#app-mount .authBox__7196a {								/* login				modal body							*/
	background-color: transparent;
	box-shadow: none;
	color: var(--text-muted);
	position: relative;
	overflow: hidden;
}
#app-mount .authBox__7196a.authBoxExpanded_e57789 {					/* login				modal body expanded						*/
	background-color: rgba(var(--transparencycolor_v), .5);
	box-shadow: 0 0 0 1px rgba(var(--transparencycolor_v), .3), 0 2px 10px 0 rgba(var(--transparencycolor_v), .3);
}
#app-mount .navRow_bb8efc {								/* modal				modal footer							*/
	background-color: rgba(var(--transparencycolor_v), .2);
}

/* ----		13.8.		DOWNLOADAPPMODAL				---- */

#app-mount .downloadApps__30ed7 {							/* modal				container							*/
	background-color: transparent;
	box-shadow: 0 0 0 1px rgba(var(--transparencycolor_v), .3), 0 2px 10px 0 rgba(var(--transparencycolor_v), .3);
	position: relative;
	overflow: hidden;
}
.downloadApps__30ed7::before,
.downloadApps__30ed7::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	pointer-events: none;
	z-index: -1;
}
.downloadApps__30ed7::before {
	background: var(--popout_v) var(--popoutposition_v)/var(--popoutsize_v);
	background-attachment: fixed;
}
.downloadApps__30ed7::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.2));
	backdrop-filter: blur(var(--popoutblur_v));
}
.downloadApps__30ed7 .header__01af9 {
	color: var(--text-normal);
}
.downloadApps__30ed7 .footer__49ae9 {
	color: var(--text-muted);
}
.downloadApps__30ed7 .platforms__86929 .platform__97f9e {
	border-color: var(--header-secondary);
}
.downloadApps__30ed7 .platforms__86929 .platform__97f9e p {
	color: var(--header-secondary);
}
.downloadApps__30ed7 .platforms__86929 .platform__97f9e .downloadButton__87489 {
	background-color: var(--header-secondary);
}
.downloadApps__30ed7 .platforms__86929 .platform__97f9e.active__8f9aa .downloadButton__87489 {
	text-shadow: 1px 1px var(--textshadow_v);
}

/* ----		13.9.		GUILDBOOSTMODAL					---- */

#app-mount .subscriberCount__53026 {							/* modal				subcount							*/
	color: var(--header-secondary);
}
#app-mount .subscriberCount__53026 strong {
	color: var(--text-normal);
}
#app-mount .moreSubscribers_a13ebc {							/* modal				suboverflow							*/
	background-color: rgba(var(--transparencycolor_v), .3);
	color: var(--header-primary)
}

#app-mount .subscribersPopout__1da1e {							/* subpopout				container							*/
	background-color: transparent;
	box-shadow: 0 2px 10px rgba(var(--transparencycolor_v), .2);
	overflow: hidden;
}
.subscribersPopout__1da1e::before,
.subscribersPopout__1da1e::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	pointer-events: none;
	z-index: -1;
}
.subscribersPopout__1da1e::before {
	background: var(--popout_v) var(--popoutposition_v)/var(--popoutsize_v);
	background-attachment: fixed;
}
.subscribersPopout__1da1e::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.35));
	backdrop-filter: blur(var(--popoutblur_v));
}
#app-mount .subscribersPopoutUser_a790de {						/* subpopout				users								*/
	color: var(--header-secondary);
}

#app-mount .iconWrapper__9caa9 {							/* prebuy popout			amount icon wrapper						*/
	background: rgba(var(--transparencycolor_v), .3);
}
.icon_ae3492:hover {									/* prebuy popout			amount icon							*/
	background: rgb(var(--accentcolor_v));
}

/* ----		13.10.		REACTIONSMODAL					---- */

#app-mount .scroller__5fda0 {								/* modal				sidebar								*/
	background-color: rgba(var(--transparencycolor_v), .4);
}
#app-mount .reactors__20ab0 {								/* modal				list								*/
	background-color: rgba(var(--transparencycolor_v), .2);
}
#app-mount .reactionDefault__792ef:hover {						/* modal				reaction							*/
	background-color: rgba(var(--transparencycolor_v), .2);
}
#app-mount .reactionSelected__249a7 {
	background-color: rgba(var(--transparencycolor_v), .4);
}
#app-mount .remove__6bd0e {								/* modal				remove								*/
	color: var(--interactive-normal);
}
#app-mount .remove__6bd0e:hover {
	background-color: rgba(var(--transparencycolor_v), .4);
	color: var(--interactive-hover);
}
#app-mount .discriminator__18879 {							/* modal				discriminator							*/
	color: var(--text-muted);
}

/* ----		13.11.		GUILDWELCOMEMODAL				---- */

.optionContainer__5d0b1 {								/* modal				option								*/
	background-color: rgba(var(--transparencycolor_v), .2);
}
.optionContainer__5d0b1:hover {
	background-color: rgba(var(--transparencycolor_v), .4);
}

/* ----		13.12.		GUILDRULESMODAL					---- */

.guildSidebar__8763f {									/* modal				sidebar								*/
	background-color: rgba(var(--transparencycolor_v), .4);
}
.footer__2f589 {									/* modal				footer								*/
	background: transparent;
}
.modal_b38209 {										/* modal				inner								*/
	background-color: rgba(var(--transparencycolor_v), .2);
}

/* ----		13.13.		GUILDFEEDBACKMODAL				---- */

.root_b4f834 {										/* modal				items								*/
	background-color: transparent;
	border-radius: 0;
}
.option_f70eea {									/* modal				item								*/
	background-color: rgb(var(--transparencycolor_v), .2);
	border: none;
	border-radius: 8px;
	margin-bottom: 8px;
}
.option_f70eea:hover {
	background-color: rgb(var(--transparencycolor_v), .4);
}

/* ----		13.14.		SCREENSHAREMODAL				---- */

#app-mount .sourceThumbnail__21c87 {							/* modal				preview tiles							*/
	background-color: rgba(var(--transparencycolor_v), .4);
	box-shadow: 0 2px 5px rgba(var(--transparencycolor_v), .2), 0 0 0 1px rgba(var(--transparencycolor_v), .6);
}
.card__7756d {
	background-color: rgba(var(--transparencycolor_v), .2);
	border-color: rgba(var(--transparencycolor_v), .4);
}
#app-mount .item__126a6 {
	border-color: rgba(var(--transparencycolor_v), .4);
}
.selectorButton_c6ae93:not(.selectorButtonSelected_fbe8fc) {
	background-color: rgba(var(--transparencycolor_v), .2);
}

/* ----		13.15.		PHONEVERIFICATIONMODAL				---- */

.phoneField__65729 {
	background-color: rgba(var(--transparencycolor_v), .2);
}
.phoneField__65729 .inputField__3008c {
	background-color: transparent;
}
.phoneFieldPopout__3e064 {
	position: absolute !important;
}

/* ----		13.16.		NOTIFICATIONSMODAL				---- */

#app-mount .channelName_a1ccf5 {
	color: var(--header-primary);
}
#app-mount .guildName_b9dc9e,
#app-mount .override_f2098b,
#app-mount .overrideHighlight__6a2f1 {
	color: var(--header-secondary);
}
#app-mount .override_f2098b:hover {
	background-color: rgba(var(--backgroundtertiary),.1);
}
#app-mount .overrideHighlight__6a2f1,
#app-mount .overrideHighlight__6a2f1:hover {
	background-color: rgba(var(--backgroundtertiary),.3);
}
#app-mount .checkboxContainer__5a761::before {
	background-color: rgba(var(--backgroundtertiary),.6);
}
#app-mount .overridePlaceholder__46353 {
	border: 1px dashed var(--background-floating);
}

/* ----		13.17.		PODIUMSTARTMODAL				---- */

#app-mount .iconContainer__466ce {
	background-color: rgba(var(--transparencycolor_v), .5);
}


/* ~~~~		14.		POPOUTS						~~~~ */

.layer_ec16dd:nth-child(1) {
	z-index: 1012;
}
.layer_ec16dd:nth-child(2) {
	z-index: 1013;
}
.layer_ec16dd:nth-child(3) {
	z-index: 1014;
}
.layer_ec16dd:nth-child(4) {
	z-index: 1015;
}
.layer_ec16dd:nth-child(5) {
	z-index: 1016;
}
.layer_ec16dd:nth-child(6) {
	z-index: 1017;
}
.layer_ec16dd:nth-child(7) {
	z-index: 1018;
}
.layer_ec16dd:nth-child(8) {
	z-index: 1019;
}
.layer_ec16dd:nth-child(9) {
	z-index: 1020;
}

.translate_c2f6c4 {
	transform: unset !important;
}

#app-mount .loadingPopout__5f0e8,							/* loading popout											*/
#app-mount .container__8261a,								/* browser popout											*/
#app-mount .themedPopout_1TrfdI {							/* themed popout											*/
	background-color: transparent;
	border: none;
	border-radius: 5px;
	box-shadow: 0 0 0 1px rgba(var(--transparencycolor_v), .3), 0 2px 10px 0 rgba(var(--transparencycolor_v), .3);
	color: var(--header-primary);
	position: relative;
}
.loadingPopout__5f0e8::before,
.container__8261a::before,
.themedPopout_1TrfdI::before,
.loadingPopout__5f0e8::after,
.container__8261a::after,
.themedPopout_1TrfdI::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	border-radius: 5px;
	pointer-events: none;
	z-index: -1;
}
.loadingPopout__5f0e8::before,
.container__8261a::before,
.themedPopout_1TrfdI::before {
	background: var(--popout_v) var(--popoutposition_v)/var(--popoutsize_v);
	background-attachment: fixed;
}
.loadingPopout__5f0e8::after,
.container__8261a::after,
.themedPopout_1TrfdI::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.25));
	backdrop-filter: blur(var(--popoutblur_v));
}
#app-mount .divider__17151 {								/* popout				divider								*/
	border-color: var(--background-modifier-accent);
}

/* ----		14.1.		CONTEXTMENU					---- */

.menu_dc52c6,										/* contextmenu				fixed								*/
.submenu_acf564 {									/* contextmenu				submenu								*/
	background: transparent;
	box-shadow: 0 0 0 1px rgba(var(--transparencycolor_v), .3), 0 2px 10px 0 rgba(var(--transparencycolor_v), .3);
}
.menu_dc52c6::before,
.submenu_acf564::before,
.menu_dc52c6::after,
.submenu_acf564::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	border-radius: 4px;
	pointer-events: none;
	z-index: -1;
}
.menu_dc52c6::before,
.submenu_acf564::before {
	background: var(--popout_v) var(--popoutposition_v)/var(--popoutsize_v);
	background-attachment: fixed;
}
.menu_dc52c6::after,
.submenu_acf564::after {
	background: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.3));
	backdrop-filter: blur(var(--popoutblur_v));
}
.submenu_acf564 {
	position: relative;
}
.item__183e8.colorDefault__0b482.focused__27621,
.item__183e8.colorDefault__0b482:hover:not(.hideInteraction__2790e) {
	background-color: rgba(var(--accentcolor_v), .2) !important;
}
.item__183e8.colorDanger_eec36d.focused__27621,
.item__183e8.colorDanger_eec36d:hover:not(.hideInteraction__2790e) {
	background-color: rgba(var(--dangercolor), .2) !important;
}
.item__183e8.colorSuccess__6b952.focused__27621,
.item__183e8.colorSuccess__6b952:hover:not(.hideInteraction__2790e) {
	background-color: rgba(var(--successcolor), .2) !important;
}
.item__183e8.colorBrand__471df.focused__27621,
.item__183e8.colorBrand__471df:hover:not(.hideInteraction__2790e) {
	background-color: rgba(var(--accentcolor_v), .2) !important;
}
.item__183e8.colorPremium__548bd.focused__27621,
.item__183e8.colorPremium__548bd:hover:not(.hideInteraction__2790e) {
	background-color: rgba(var(--accentcolor2_v), .2) !important;
}
.item__183e8.colorPremiumGradient__45b85.focused__27621,
.item__183e8.colorPremiumGradient__45b85:hover:not(.hideInteraction__2790e) {
	background: linear-gradient(90deg, rgba(var(--accentcolor2_v), .2), rgba(var(--accentcolor_v), .2)) !important;
}
#app-mount .item__183e8 .checkbox__45366 {						/* contextmenu				checkbox 							*/
	color: rgb(var(--accentcolor_v));
}
#app-mount .item__183e8.colorDanger_eec36d .checkbox__45366 {
	color: rgb(var(--dangercolor));
}
#app-mount .item__183e8.colorSuccess__6b952 .checkbox__45366 {
	color: rgb(var(--successcolor));
}
#app-mount .item__183e8.colorPremium__548bd .checkbox__45366 {
	color: rgb(var(--accentcolor2_v));
}
#app-mount .item__183e8 .check__8d1bd {							/* contextmenu				checkmark 							*/
	color: #fff;
	stroke: var(--textshadow_v);
}
.button__3ecb4 {									/* contextmenu				quick reaction button						*/
	background-color: rgba(var(--transparencycolor_v), .3);
}
.button__3ecb4:hover {
	background-color: rgb(var(--accentcolor_v));
}

/* ----		14.2.		USERPOPOUT					---- */

.userPopoutOuter_d739b2 {								/* popout				container							*/
	box-shadow: 0 0 0 1px rgba(var(--transparencycolor_v), .3), 0 2px 10px 0 rgba(var(--transparencycolor_v), .3);
}
.userProfileOuterUnthemed__48723 {							/* popout				container							*/
	background: transparent;
}
.userProfileOuterUnthemed__48723::before,
.userProfileOuterUnthemed__48723::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	border-radius: 5px;
	pointer-events: none;
	z-index: -1;
}
.userProfileOuterUnthemed__48723::before {
	background: var(--popout_v) var(--popoutposition_v)/var(--popoutsize_v);
	background-attachment: fixed;
}
.userProfileOuterUnthemed__48723::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.25));
	backdrop-filter: blur(var(--popoutblur_v));
}
.accountProfilePopoutWrapper_af829a .overlayBackground__86b78 {
	display: block !important;
}
.profileColors__2e2f0 {									/* popout				profilecolors							*/
	--profile-body-background-color: rgba(0,0,0,.4) !important;
	--profile-body-divider-color: var(--background-modifier-accent) !important;
	--profile-body-divider-opacity: 1 !important;
}
#app-mount .userProfileOuterThemed__6eb84 ::-webkit-scrollbar-thumb {
	background-color: var(--profile-gradient-secondary-color) !important;
}
.userProfileInnerThemed_f7ead7::after {
	content: "";
	position: absolute;
	display: block;
	background: var(--profile-gradient-primary-color);
	top: 4px;
	right: 4px;
	left: 4px;
	height: 60px;
	z-index: 1;
}
.userProfileInnerThemed_f7ead7::before {
	z-index: 2;
}
.userProfileInnerThemed_f7ead7 > * {
	z-index: 3;
}
.userProfileInnerThemedWithBanner_d5f991::after {
	height: 120px;
}
.userProfileInner__8065b {								/* popout				inner								*/
	border-radius: 4px;
}
.userPopoutOuter_d739b2 .wrapper_edb6e0,						/* popout				avatar								*/
.userPopoutOuter_d739b2 .avatarWrapper {						/* popout				status everywhere						*/
	background-color: transparent;
	border-color: transparent;
	box-sizing: content-box;
}

.root_a99273 {										/* body					roles								*/
	max-height: 100px;
	overflow-x: hidden;
	overflow-y: scroll;
}
#app-mount .root_a99273::-webkit-scrollbar {
	width: 4px;
}
#app-mount .role__631a3 {								/* body					role								*/
	border-color: rgba(var(--textbrighter_v), .6);
	border-radius: 5px;
	padding: 0 5px;
	position: relative;
}
#app-mount .role__631a3[style*="border-color: rgba(185, 187, 190, .6)"] {
	border-color: rgba(var(--textbrighter_v), .6) !important;
}
#app-mount .rolePillBorder__00c58:not(.actionButton__81eaa) {
	border-width: 0;
}
#app-mount .role__631a3 .roleName_d19d33 {						/* body					rolename							*/
	position: relative;
	color: rgb(var(--textbrightest_v));
	height: 20px;
	line-height: 20px;
	margin: 0;
	font-weight: normal;
	z-index: 1000;
	pointer-events: none;
}
#app-mount .role__631a3 .roleRemoveButton__737f2 {
	position: absolute;
	top: 0;
	right: 0;
	bottom: 0;
	left: 0;
}
#app-mount .role__631a3 .roleCircle_bae511 {						/* body					rolecircle							*/
	position: absolute;
	background-color: rgb(var(--textbrighter_v));
	border-radius: 3px;
	opacity: 0.3;
	height: 100%;
	width: 100%;
	margin: 0;
	left: 0;
	top: 0;
}
#app-mount .role__631a3 .roleCircle_bae511[style*="background-color: rgb(185, 187, 190)"] {
	background-color: rgb(var(--textbrighter_v)) !important;
}
#app-mount .role__631a3 .roleCircle_bae511:not(:only-child):hover {
	opacity: 1;
	z-index: 2000;
	cursor: pointer;
}
#app-mount .role__631a3 .roleRemoveIcon__7f63d {
	z-index: 2001;
	pointer-events: none;
}
#app-mount .role__631a3 .roleIcon__7599e {
	z-index: 1;
}

.textarea_c5a7a3:focus {								/* body					note 								*/
	background-color: rgba(var(--transparencycolor_v), .2);
}

#app-mount .wumpusTooltip_b5c0ea {
	background-color: rgb(var(--accentcolor_v));
	color: #fff;
	text-shadow: 1px 1px var(--textshadow_v);
}
#app-mount .wumpusTooltip_b5c0ea::after {
	border-color: transparent rgb(var(--accentcolor_v)) transparent transparent;
}

/* ----		14.3.		EMOJIPICKER					---- */

.contentWrapper__321ed,									/* picker				expression wrapper						*/
.emojiPicker_b65ce9,									/* picker				inner								*/
.diversitySelectorOptions__846c5 {							/* picker				diversityselector						*/
	background: transparent;
	box-shadow: 0 2px 10px 0 rgba(var(--transparencycolor_v), .3);
	border: none;
	overflow: hidden;
}
.contentWrapper__321ed::before,
.emojiPicker_b65ce9::before,
.diversitySelectorOptions__846c5::before,
.contentWrapper__321ed::after,
.emojiPicker_b65ce9::after,
.diversitySelectorOptions__846c5::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	pointer-events: none;
	z-index: -1;
}
.contentWrapper__321ed::before,
.emojiPicker_b65ce9::before,
.diversitySelectorOptions__846c5::before {
	background: var(--popout_v) var(--popoutposition_v)/var(--popoutsize_v);
	background-attachment: fixed;
}
.contentWrapper__321ed::after,
.emojiPicker_b65ce9::after,
.diversitySelectorOptions__846c5::after {
	background: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.25));
	backdrop-filter: blur(var(--popoutblur_v));
}
.diversitySelectorOptions__846c5::before,
.diversitySelectorOptions__846c5::after {
	border-radius: 5px;
}

.diversityEmojiItem__6505f:hover {							/* picker				diversityemoji							*/
	background-color: rgb(var(--accentcolor_v));
}

.navButtonActive__735cb {								/* picker				navbuttonactive							*/
	background-color: rgb(var(--accentcolor_v));
	color: #fff;
	text-shadow: 1px 1px var(--textshadow_v);
}

.wrapper__4f229 {									/* picker				sidebar								*/
	background-color: rgba(var(--transparencycolor_v), .2);
}

.guildIcon__4d796 {									/* picker				guildicon							*/
	background-color: rgba(var(--transparencycolor_v), .2);
}

.categoryItemDefaultCategory__67fe7:first-child,
.categoryItemDefaultCategory__67fe7:first-child + .categoryItemDefaultCategory__67fe7 {
	margin-bottom: 8px;
}
.categoryItemDefaultCategory__67fe7:hover,						/* picker				categoryitem							*/
.stickerCategory__4891e:hover {								/* picker				stickercategoryitem						*/
	background-color: rgba(var(--transparencycolor_v), .3);
}
.categoryItemDefaultCategorySelected__8245a,						/* picker				categoryitem selected						*/
.categoryItemDefaultCategorySelected__8245a:hover {
	background-color: rgb(var(--accentcolor_v));
}
.categoryItemDefaultCategorySelected__8245a svg,					/* picker				categoryitem selected						*/
.categoryItemDefaultCategorySelected__8245a:hover svg {
	filter: drop-shadow(1px 1px var(--textshadow_v));
}

.unicodeShortcut__1dd6b {								/* picker				unicodeemojis shortcut						*/
	background-color: transparent;
	border: none;
	overflow: hidden;
	z-index: 100;
}
.unicodeShortcut__1dd6b::before,
.unicodeShortcut__1dd6b::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	pointer-events: none;
	z-index: -1;
}
.unicodeShortcut__1dd6b::before {
	background: var(--popout_v) var(--popoutposition_v)/var(--popoutsize_v);
	background-attachment: fixed;
}
.unicodeShortcut__1dd6b::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.35));
	backdrop-filter: blur(var(--popoutblur_v));
}

.inspector__993e1 {									/* picker				emojiinfowrapper						*/
	background-color: rgba(var(--transparencycolor_v), .2);
}

#app-mount .wrapper__7a35f {								/* picker				categoryheader							*/
	background: transparent;
	position: static;
}

#app-mount .imageLoading__37d01 {							/* picker				emoji loading							*/
	background: rgba(var(--transparencycolor_v), .3);
	border-radius: 10px;
}
.emojiItem_b15dee.emojiItemSelected__1a09a {						/* picker				emoji selected							*/
	background-color: rgb(var(--accentcolor_v));
}
.emojiItemDisabled__36cbf {								/* picker				emoji disabled							*/
	filter: none;
	cursor: no-drop;
}
.emojiItemDisabled__36cbf > * {
	filter: grayscale(1);
}

.premiumPromo__2d678 {									/* picker				premium warning							*/
	background-color: transparent;
	opacity: 1;
}
.premiumPromo__2d678::before,
.premiumPromo__2d678::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	opacity: 0.9;
	pointer-events: none;
	z-index: -1;
}
.premiumPromo__2d678::before {
	background: var(--popout_v) var(--popoutposition_v)/var(--popoutsize_v);
	background-attachment: fixed;
}
.premiumPromo__2d678::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.29));
	backdrop-filter: blur(var(--popoutblur_v));
}
.premiumPromoClose__11b8f {
	-webkit-mask: url(https://discord.com/assets/411dfecce0d7da63ea2b.svg) 50% 50% no-repeat;
	background: var(--interactive-normal);
}
.premiumPromoClose__11b8f:hover {
	background: var(--interactive-hover);
}
.premiumPromoClose__11b8f:active {
	background: var(--interactive-active);
}
#app-mount .categoryItemDefaultCategorySelected__8245a .categoryIcon__7d3fc,
#app-mount .categoryItemDefaultCategorySelected__8245a:hover .categoryIcon__7d3fc {
	color: var(--interactive-active);
}

#app-mount .focused__036ed,								/* gifpicker				result								*/
#app-mount .result_e1fc74:hover {
	box-shadow: 0 11px 22px 1px rgba(var(--transparencycolor_v), .3);
}
#app-mount .placeholder__1d2a8 {
	background: rgba(var(--textdarkest_v),.6);
}
#app-mount .endContainer__0c909::after {
	background-image: url(https://discord.com/assets/6836d88af9197cbd4cbb.svg);
	opacity: 0.6;
}
#app-mount .endText__2c9a4 {
	color: var(--header-secondary);
}
#app-mount .emptyHintCard_f3e81a {
	background-color: rgba(var(--transparencycolor_v), .2);
	color: var(--header-secondary);
}
#app-mount .backButton__6a1f0 {								/* gifpicker				backbutton							*/
	color: var(--interactive-normal);
}
#app-mount .backButton__6a1f0:hover {
	color: var(--interactive-hover);
}
#app-mount .backButton__6a1f0:active {
	color: var(--interactive-active);
}


/* ----		14.4.		PINS/MENTIONS					---- */

.messagesPopoutWrap_b3b384,								/* popout				wrapper								*/
.container__20de0 {									/* popout				wrapper	(inbox)							*/
	background-color: transparent;
	box-shadow: 0 2px 10px 0 rgba(var(--transparencycolor_v), .3);
	border: none;
	overflow: hidden;
}
.messagesPopoutWrap_b3b384 > *,
.container__20de0 > * {
	z-index: 1000;
}
.messagesPopoutWrap_b3b384::before,
.container__20de0::before,
.messagesPopoutWrap_b3b384::after,
.container__20de0::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	pointer-events: none;
	z-index: -1;
}
.messagesPopoutWrap_b3b384::before,
.container__20de0::before {
	background: var(--popout_v) var(--popoutposition_v)/var(--popoutsize_v);
	background-attachment: fixed;
}
.messagesPopoutWrap_b3b384::after,
.container__20de0::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.25));
	backdrop-filter: blur(var(--popoutblur_v));
}
#app-mount .messagesPopout__22763 {							/* popout				innerwrap							*/
	background-color: transparent;
}

.header_f5cc88 {									/* popout				header								*/
	background-color: rgba(var(--transparencycolor_v), .2);
	box-shadow: 0 2px 3px 0 rgba(var(--transparencycolor_v), .2);
}

.footer_a3029c {									/* popout				footer								*/
	background-color: rgba(var(--transparencycolor_v), .2);
}

.messageGroupWrapper_f8c6e9 {
	background-color: transparent;
	border: none;
	overflow: visible;
	padding: 11px 10px 10px 10px;
}
.messageGroupWrapper_f8c6e9 + .messageGroupWrapper_f8c6e9::before {
	content: "";
	border-top: 1px solid var(--background-modifier-accent);
	position: absolute;
	top: -3px;
	left: 0;
	width: 100%;
}
.actionButtons__0ac05 {									/* popout				actionbuttonscontainer						*/
	top: 4px;
	right: 14px;
}
.jumpButton_da1ebb,									/* popout				jumpbutton (mentions)						*/
.jumpButton__0329d {									/* popout				jumpbutton (pins)						*/
	background-color: rgba(var(--transparencycolor_v), .4);
}
.jumpButton_da1ebb:hover,
.jumpButton__0329d:hover {
	background-color: rgb(var(--accentcolor_v));
}
.jumpButton_da1ebb + .jumpButton_da1ebb,
.jumpButton__0329d + .jumpButton__0329d {
	margin-left: 2px;
}

.image__0a0fc {										/* popout				emptyimage							*/
	opacity: 0.6;
}
.image__0a0fc[style*='url("/assets/9e2f412156e2ac1f14e9.svg")'] {
	background-image: url(https://discord.com/assets/64df6f04b850029d2e78.svg) !important;
}

#app-mount .header__28ebb .tabBar__2aa8e .tab_a8a066.active__7e7af {			/* popout				active tab							*/
	background-color: rgb(var(--accentcolor_v));
}
.secondary_c96c46,									/* popout				header button							*/
.tertiary_bc0225,									/* popout				message button							*/
.collapseButton_b18eab {								/* popout				collapse button							*/
	background-color: rgba(var(--transparencycolor_v), .2);
}
.secondary_c96c46:hover,
.tertiary_bc0225:hover,
.collapseButton_b18eab:hover {
	background-color: rgba(var(--transparencycolor_v), .4);
}
.collapseButton_b18eab {
	position: static;
	margin-left: 12px;
	border-radius: 32px;
	box-sizing: border-box;
	cursor: pointer;
	flex-shrink: 0;
	height: 32px;
	min-height: 32px;
	width: 32px;
	min-width: 32px;
	padding: 8px;
	transform: unset !important;
}
.collapseButton_b18eab.collapsed__8da7d svg {
	transform: rotate(-90deg);
}

.channelHeader__5d30c {									/* popout				channelheader							*/
	background-color: rgba(var(--transparencycolor_v), .4);
	padding-right: 16px;
	border-radius: 5px 5px 0 0;
	position: static;
}
.channelHeader__5d30c:only-child {
	border-radius: 0;
}
.messageContainer_aa7d14,								/* popout				messagecontainer						*/
.messages_f7999e {									/* popout				messagecontainer (inbox)					*/
	background-color: rgba(var(--transparencycolor_v), .2);
	border-radius: 0;
}
.messageContainer_aa7d14:last-child,
.messages_f7999e:last-child {
	border-radius: 0 0 5px 5px;
}

.tutorial__7b875 {									/* popout				tutorial (inbox)						*/
	background-color: rgba(var(--transparencycolor_v), .4);
}
.tutorialIcon__5c63f {									/* popout				tutorial (inbox)						*/
	background-color: rgba(var(--transparencycolor_v), .4);
}

/* ----		14.5.		SEARCHPOPOUT					---- */

#app-mount .container_d6dad3 {								/* popout				wrapper								*/
	background-color: transparent;
	box-shadow: 0 2px 10px 0 rgba(var(--transparencycolor_v), .3);
	border: none;
	overflow: hidden;
	position: relative;
}
.container_d6dad3::before,
.container_d6dad3::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	pointer-events: none;
	z-index: -1;
}
.container_d6dad3::before {
	background: var(--popout_v) var(--popoutposition_v)/var(--popoutsize_v);
	background-attachment: fixed;
}
.container_d6dad3::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.25));
	backdrop-filter: blur(var(--popoutblur_v));
}
#app-mount .queryContainer_c359fe {
	border-bottom-color: var(--background-modifier-accent);
	color: var(--header-secondary);
}
#app-mount .queryContainer_c359fe strong {
	color: var(--header-primary);
}
#app-mount .focused_f9cf2c {
	background-color: rgba(var(--transparencycolor_v), .2);
}
#app-mount .resultsGroup_ea9b64::before {
	border-top-color: var(--background-modifier-accent);
}
#app-mount .resultsGroup_ea9b64 .header_b24bd1,
#app-mount .resultsGroup_ea9b64 .plusIcon__36244,
#app-mount .resultsGroup_ea9b64 .searchClearHistory_cd1df2,
#app-mount .resultsGroup_ea9b64 .searchLearnMore_bf7b8e a {
	color: var(--text-normal);
}
#app-mount .resultsGroup_ea9b64 .header_b24bd1,
#app-mount .resultsGroup_ea9b64 .plusIcon__36244 {
	color: var(--text-normal);
}
#app-mount .option_b5597b::after {
	display: none;
}
#app-mount .option_b5597b:hover,
#app-mount .option_b5597b[aria-selected=true] {
	background-color: rgba(var(--transparencycolor_v), .2);
}
#app-mount .option_b5597b:hover::before,
#app-mount .option_b5597b[aria-selected=true]::before {
	background-color: rgb(var(--accentcolor_v));
	border-radius: 3px;
	width: 34px;
}
#app-mount .option_b5597b:hover .plusIcon__36244,
#app-mount .option_b5597b[aria-selected=true] .plusIcon__36244 {
	color: white;
	opacity: 1;
}
#app-mount .option_b5597b .answer__9ff92,
#app-mount .option_b5597b .nonText_cbb69b,
#app-mount .option_b5597b strong {
	color: var(--text-normal);
}
#app-mount .option_b5597b .filter_bd5fe7 {
	color: var(--text-muted);
}
#app-mount .option_b5597b.user__97b4c .displayedNick_df9a16 {
	color: var(--text-normal);
}
#app-mount .option_b5597b.user__97b4c .displayUsername_aea59a {
	color: var(--interactive-muted);
}
#app-mount .searchOption__41bc5 .filter_bd5fe7 {
	color: var(--text-normal);
}
#app-mount .searchOption__41bc5 .answer__9ff92 {
	color: var(--text-muted);
}
#app-mount .searchResultChannelCategory__7ebb5,
#app-mount .searchResultChannelIcon__95142 {
	color: var(--text-muted);
}

#app-mount .calendarPicker__5c474 .react-datepicker {
	background: transparent;
}
#app-mount .calendarPicker__5c474 .react-datepicker__day:not(.react-datepicker__day--outside-month) {
	border-color: rgba(var(--transparencycolor_v), .5);
}
#app-mount .calendarPicker__5c474 .react-datepicker__day--outside-month {
	background: rgba(var(--transparencycolor_v), .5);
	border-color: transparent;
}
#app-mount .calendarPicker__5c474 .react-datepicker__header,
#app-mount .calendarPicker__5c474 .react-datepicker__month-container,
#app-mount .calendarPicker__5c474 .react-datepicker__day--disabled:not(.react-datepicker__day--outside-month) {
	background: rgba(var(--transparencycolor_v), .2);
}
#app-mount .calendarPicker__5c474 .react-datepicker__header {
	padding-bottom: 5px;
}
#app-mount .calendarPicker__5c474 .react-datepicker__navigation {
	background: transparent;
	border-color: rgba(var(--textbrightest_v), .5);
	top: 30px;
}
#app-mount .calendarPicker__5c474 .react-datepicker__navigation::before {
	content: "";
	position: absolute;
	top: 0;
	right: 0;
	bottom: 0;
	left: 0;
	-webkit-mask: url(https://discord.com/assets/f03e2d8e19438cceaad7.svg) center/6px 12px no-repeat;
	background-color: rgb(var(--textbrightest_v));
}
#app-mount .calendarPicker__5c474 .react-datepicker__navigation--previous {
	left: 30px;
}
#app-mount .calendarPicker__5c474 .react-datepicker__navigation--next {
	right: 30px;
}
#app-mount .calendarPicker__5c474 .react-datepicker__current-month {
	border-color: transparent;
	padding: 10px 0;
}
#app-mount .calendarPicker__5c474 .react-datepicker__current-month,
#app-mount .calendarPicker__5c474 .react-datepicker__day-name,
#app-mount .calendarPicker__5c474 .react-datepicker__day:not(.react-datepicker__day--disabled):hover,
#app-mount .calendarPicker__5c474 .react-datepicker__day:not(.react-datepicker__day--disabled):not(.react-datepicker__day--outside-month),
#app-mount .calendarPicker__5c474 .datePickerHint__7cc9b .hint__460f1,
#app-mount .calendarPicker__5c474 .datePickerHint__7cc9b .hintValue_c2ce1f {
	color: var(--header-primary);
}
#app-mount .calendarPicker__5c474 .react-datepicker__day--disabled:not(.react-datepicker__day--outside-month) {
	color: var(--header-secondary);
}
#app-mount .calendarPicker__5c474 .react-datepicker__day--outside-month {
	color: var(--text-muted);
	cursor: no-drop;
}
#app-mount .datePicker__94673 .datePickerHint__7cc9b {
	margin: 0;
	padding: 20px;
	display: flex;
	justify-content: center;
	border-top-color: var(--background-modifier-accent);
}
#app-mount .datePicker__94673 .datePickerHint__7cc9b .hint__460f1 {
	color: var(--text-normal);
}
#app-mount .datePicker__94673 .datePickerHint__7cc9b .hintValue_c2ce1f {
	color: var(--header-primary);
}
#app-mount .datePicker__94673 .datePickerHint__7cc9b .hintValue_c2ce1f:hover {
	text-shadow: 1px 1px var(--textshadow_v);
}

/* ----		14.6.		COLORPICKER					---- */

#app-mount .customColorPicker__3cb6a {							/* popout				wrapper								*/
	background-color: transparent;
	box-shadow: 0 0 0 1px rgba(var(--transparencycolor_v), .3), 0 2px 10px 0 rgba(var(--transparencycolor_v), .3);
	border: none;
	border-radius: 3px;
	overflow: hidden;
}
.customColorPicker__3cb6a::before,
.customColorPicker__3cb6a::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	border-radius: 5px;
	pointer-events: none;
	z-index: -1;
}
.customColorPicker__3cb6a::before {
	background: var(--popout_v) var(--popoutposition_v)/var(--popoutsize_v);
	background-attachment: fixed;
}
.customColorPicker__3cb6a::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.35));
	backdrop-filter: blur(var(--popoutblur_v));
}

/* ----		14.7.		ADDROLE						---- */

#app-mount .container_d27846,								/* popout				userpopout							*/
#app-mount .container_e84cda {								/* popout				channelsettings							*/
	background-color: transparent;
	box-shadow: 0 0 0 1px rgba(var(--transparencycolor_v), .3), 0 2px 10px 0 rgba(var(--transparencycolor_v), .3);
	border: none;
	border-radius: 3px;
	overflow: hidden;
	width: 300px;
}
.container_d27846::before,
.container_d27846::after,
.container_e84cda::before,
.container_e84cda::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	pointer-events: none;
	z-index: -1;
}
.container_d27846::before,
.container_e84cda::before {
	background: var(--popout_v) var(--popoutposition_v)/var(--popoutsize_v);
	background-attachment: fixed;
}
.container_d27846::after,
.container_e84cda::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.1));
	backdrop-filter: blur(var(--popoutblur_v));
}
.focused__2b1b2,
.item__287de:focus:not(.disabled__1c6ff),
.item__287de:hover:not(.disabled__1c6ff),
.row__3fe26.selected__75860 .rowInner_feb94d,
.row__3fe26:focus .rowInner_feb94d,
.row__3fe26:hover .rowInner_feb94d {
	background: rgba(var(--transparencycolor_v), .4);
}
#app-mount .container_e84cda .header__02652 {
	background: rgba(var(--transparencycolor_v), .2);
}
#app-mount .container_e84cda .input_e396c0 {
	color: var(--header-primary);
}
#app-mount .container_e84cda .sectionTag_b0df68 {
	background: transparent;
}
.autocompleteShadow__902d2,
.autocompleteArrowWrapper_b172c6,
.autocompleteHeaderBackground__4e6c3 {
	display: none;
}


/* ----		14.8.		EVERYONEMENTION					---- */

.contentWarningPopout__7d8c2 .animation__14012 {
	opacity: 0.6;
}
#app-mount .footer__36118 {
	background-color: rgba(var(--transparencycolor_v), .2);
	color: var(--text-muted);
}

/* ----		14.9.		CHANNELFOLLOW					---- */

#app-mount .header__4ef99 {
	background: rgba(var(--transparencycolor_v), .3);
}
#app-mount .separator__925e8 {
	box-shadow: 0 1px 0 0 rgba(var(--transparencycolor_v), .3), 0 1px 2px 0 rgba(var(--transparencycolor_v), .3);
}
.channelContainer_c4b275 {
	background-color: rgba(var(--transparencycolor_v), .3);
}
.channel_c9e1c9 {
	background-color: rgba(var(--transparencycolor_v), .3);
}
.channelContainer_c4b275 .channel_c9e1c9 {
	background-color: transparent;
}

/* ----		14.10.		CHANNELFOLLOWINFO				---- */

#app-mount .guildPopout_ea4d8c {							/* popout				wrapper								*/
	background-color: transparent;
	box-shadow: 0 0 0 1px rgba(var(--transparencycolor_v), .3), 0 2px 10px 0 rgba(var(--transparencycolor_v), .3);
	border: none;
	border-radius: 3px;
	overflow: hidden;
	position: relative;
}
.guildPopout_ea4d8c::before,
.guildPopout_ea4d8c::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	pointer-events: none;
	z-index: -1;
}
.guildPopout_ea4d8c::before {
	background: var(--popout_v) var(--popoutposition_v)/var(--popoutsize_v);
	background-attachment: fixed;
}
.guildPopout_ea4d8c::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.1));
	backdrop-filter: blur(var(--popoutblur_v));
}

/* ----		14.11.		EMOJIINFO					---- */

#app-mount .popoutContainer__7b9a3 {							/* popout				wrapper								*/
	background-color: transparent;
	box-shadow: 0 0 0 1px rgba(var(--transparencycolor_v), .3), 0 2px 10px 0 rgba(var(--transparencycolor_v), .3);
	border: none;
	border-radius: 3px;
	overflow: hidden;
	position: relative;
}
.popoutContainer__7b9a3::before,
.popoutContainer__7b9a3::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	pointer-events: none;
	z-index: -1;
}
.popoutContainer__7b9a3::before {
	background: var(--popout_v) var(--popoutposition_v)/var(--popoutsize_v);
	background-attachment: fixed;
}
.popoutContainer__7b9a3::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.2));
	backdrop-filter: blur(var(--popoutblur_v));
}

.emojiSection_a65b54 {									/* popout				emojisection							*/
	background-color: transparent;
}

.guildSection_ebda04 {									/* popout				emojisection							*/
	background-color: rgba(var(--transparencycolor_v), .2);
}

/* ----		14.12.		STREAMPREVIEW					---- */

#app-mount .streamPreview__1846c {							/* popout				wrapper								*/
	background-color: transparent;
	box-shadow: 0 0 0 1px rgba(var(--transparencycolor_v), .3), 0 2px 10px 0 rgba(var(--transparencycolor_v), .3);
	border: none;
	border-radius: 3px;
	overflow: hidden;
	position: relative;
}
.streamPreview__1846c::before,
.streamPreview__1846c::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	pointer-events: none;
	z-index: -1;
}
.streamPreview__1846c::before {
	background: var(--popout_v) var(--popoutposition_v)/var(--popoutsize_v);
	background-attachment: fixed;
}
.streamPreview__1846c::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.2));
	backdrop-filter: blur(var(--popoutblur_v));
}

#app-mount .previewContainer_bb1924	{						/* popout				preview								*/
	background-color: rgba(var(--transparencycolor_v), .2);
}

/* ----		14.13.		STREAMINFO					---- */

#app-mount .container__56cd1 {								/* modal				container							*/
	background-color: transparent;
	box-shadow: 0 0 0 1px rgba(var(--transparencycolor_v), .3), 0 2px 10px 0 rgba(var(--transparencycolor_v), .3);
	position: relative;
	overflow: visible !important;
}
.container__56cd1::before,
.container__56cd1::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	pointer-events: none;
	z-index: -1;
}
.container__56cd1::before {
	background: var(--popout_v) var(--popoutposition_v)/var(--popoutsize_v);
	background-attachment: fixed;
}
.container__56cd1::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.2));
	backdrop-filter: blur(var(--popoutblur_v));
}

/* ----		14.14.		PUBLICGUILDANNOUNCEMENT				---- */

#app-mount .popout__8e314 {								/* popout				wrapper								*/
	background-color: transparent;
	box-shadow: 0 0 0 1px rgba(var(--transparencycolor_v), .3), 0 2px 10px 0 rgba(var(--transparencycolor_v), .3);
	border: none;
	border-radius: 3px;
	overflow: hidden;
	position: relative;
}
.popout__8e314::before,
.popout__8e314::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	pointer-events: none;
	z-index: -1;
}
.popout__8e314::before {
	background: var(--popout_v) var(--popoutposition_v)/var(--popoutsize_v);
	background-attachment: fixed;
}
.popout__8e314::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.2));
	backdrop-filter: blur(var(--popoutblur_v));
}

/* ----		14.15.		RTCSTATUSPOPOUT					---- */

#app-mount .container__0810b {								/* RTCpopout												*/
	background-color: transparent;
	border: none;
	border-radius: 5px;
	box-shadow: 0 0 0 1px rgba(var(--transparencycolor_v), .3), 0 2px 10px 0 rgba(var(--transparencycolor_v), .3);
	color: var(--header-primary);
	position: relative;
	width: 290px;
}
.container__0810b::before,
.container__0810b::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	border-radius: 5px;
	pointer-events: none;
	z-index: -1;
}
.container__0810b::before {
	background: var(--popout_v) var(--popoutposition_v)/var(--popoutsize_v);
	background-attachment: fixed;
}
.container__0810b::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.25));
	backdrop-filter: blur(var(--popoutblur_v));
}
#app-mount .container__0810b canvas {
	background-color: rgb(var(--transparencycolor_v));
	padding: 5px;
	border-radius: 5px;
}
#app-mount .container__0810b section {
	background-color: transparent;
}
#app-mount .container__0810b section p {
	color: var(--header-primary);
}
#app-mount .container__0810b section strong {
	color: var(--header-primary);
}
#app-mount .debugButton__0c12a {
	color: var(--header-secondary);
}
#app-mount .krispLogo__461a0 {
	-webkit-mask: url(https://discord.com/assets/ea67b1321e3d4154e476.svg) center/contain no-repeat;
	background-color: var(--header-primary);
}

/* ----		14.16.		PHONE-/EMAILVALIDATION				---- */

#app-mount .input_d5a597 {
	background-color: rgba(var(--transparencycolor_v), .2);
	color: var(--header-primary);
}
#app-mount .phoneFieldPopout__3e064 .countryName_eb9b14 {
	color: var(--header-secondary);
}
#app-mount .phoneFieldPopout__3e064 .countryCode__14e5a {
	color: var(--header-primary);
}
#app-mount .activityInviteEducationArrow_a24987 {
	-webkit-mask: url(https://discord.com/assets/6f222b93b4b971e68613.svg) center/contain no-repeat;
	background: var(--header-primary);
}

#app-mount .emailVerificationModal_e48dfa .title__78b45 {
	color: var(--header-primary);
}
#app-mount .emailVerificationModal_e48dfa .body_b7d0a4 {
	color: var(--text-muted);
}

#app-mount .verification__82f71 .title__31b19 {
	color: var(--header-primary);
}
#app-mount .verification__82f71 .body_cb675e,
#app-mount .verification__82f71 .footer__38343 {
	color: var(--header-secondary);
}
#app-mount .verificationBlock_c45d0e {
	background-color: rgba(var(--transparencycolor_v), .1);
	border: 1px solid rgba(var(--transparencycolor_v), .3);
}
#app-mount .verificationBlock_c45d0e:hover {
	background-color: rgba(var(--transparencycolor_v), .2);
	border-color: rgb(var(--transparencycolor_v));
}
#app-mount .verification__82f71 .image__54a8d {
	background-image: url(https://discord.com/assets/8f8162ee689b2d85996c.svg);
	opacity: .5;
}
#app-mount .verificationBlock_c45d0e .image__54a8d.email__44f2f {
	background-image: url(https://discord.com/assets/9e9722bd5c8ec20fd746.svg);
	opacity: .5;
}
#app-mount .verificationBlock_c45d0e .image__54a8d.phone__0b460 {
	background-image: url(https://discord.com/assets/e9802d8cbd4efea22c7f.svg);
	opacity: .5;
}
#app-mount .verificationBlock_c45d0e .body_cb675e {
	color: var(--header-secondary);
}

/* ----		14.17.		QUICKSELECTPOPOUT				---- */

#app-mount .quickSelectPopout_c0cf80,							/* quickselect												*/
#app-mount .popoutList_db80c1 {								/* listpopout												*/
	background-color: transparent;
	border: none;
	border-radius: 5px;
	box-shadow: 0 0 0 1px rgba(var(--transparencycolor_v), .3), 0 2px 10px 0 rgba(var(--transparencycolor_v), .3);
	color: var(--header-primary);
	position: relative;
}
.quickSelectPopout_c0cf80::before,
.popoutList_db80c1::before,
.quickSelectPopout_c0cf80::after,
.popoutList_db80c1::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	border-radius: 5px;
	pointer-events: none;
	z-index: -1;
}
.quickSelectPopout_c0cf80::before,
.popoutList_db80c1::before {
	background: var(--popout_v) var(--popoutposition_v)/var(--popoutsize_v);
	background-attachment: fixed;
}
.quickSelectPopout_c0cf80::after,
.popoutList_db80c1::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.25));
	backdrop-filter: blur(var(--popoutblur_v));
}
#app-mount .selectableItem__166c5 {
	color: var(--header-primary);
}
#app-mount .selectableItem__166c5:hover {
	background-color: rgba(var(--transparencycolor_v), .2);
}
#app-mount .quickSelectPopoutOption__39224:hover {
	background-color: rgba(var(--transparencycolor_v), .2);
}
#app-mount .quickSelectPopoutOption__39224.selected_b17ff5 {
	background-color: rgba(var(--transparencycolor_v), .4);
}
#app-mount .popoutListEmpty_b9719c {
	color: var(--header-primary);
}
#app-mount .quickSelectArrow__9853b {
	-webkit-mask: url(https://discord.com/assets/c4643b70509c385fcc83.svg) 50% no-repeat;
	background: var(--interactive-normal);
}

/* ----		14.18.		WARNINGPOPOUT					---- */

#app-mount .contentWarningPopout__7d8c2 {						/* popout												*/
	background-color: transparent;
	border: none;
	border-radius: 5px;
	box-shadow: 0 0 0 1px rgba(var(--transparencycolor_v), .3), 0 2px 10px 0 rgba(var(--transparencycolor_v), .3);
	position: relative;
}
.contentWarningPopout__7d8c2::before,
.contentWarningPopout__7d8c2::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	border-radius: 5px;
	pointer-events: none;
	z-index: -1;
}
.contentWarningPopout__7d8c2::before {
	background: var(--popout_v) var(--popoutposition_v)/var(--popoutsize_v);
	background-attachment: fixed;
}
.contentWarningPopout__7d8c2::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.25));
	backdrop-filter: blur(var(--popoutblur_v));
}
#app-mount .body_fa303f {
	color: var(--header-secondary);
}
#app-mount .header_bee9c9 {
	color: var(--header-primary);
}

/* ----		14.19.		ACTIVETHREADLISTPOPOUT				---- */

#app-mount .popout__24e32 {								/* popout												*/
	background-color: transparent;
	border: none;
	border-radius: 5px;
	box-shadow: 0 0 0 1px rgba(var(--transparencycolor_v), .3), 0 2px 10px 0 rgba(var(--transparencycolor_v), .3);
	position: relative;
}
.popout__24e32::before,
.popout__24e32::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	border-radius: 5px;
	pointer-events: none;
	z-index: -1;
}
.popout__24e32::before {
	background: var(--popout_v) var(--popoutposition_v)/var(--popoutsize_v);
	background-attachment: fixed;
}
.popout__24e32::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.25));
	backdrop-filter: blur(var(--popoutblur_v));
}

/* ----		14.20.		ROLEMEMBERSPOPOUT				---- */

#app-mount .rolePopout__73806 {								/* popout												*/
	background-color: transparent;
	border: none;
	border-radius: 5px;
	box-shadow: 0 0 0 1px rgba(var(--transparencycolor_v), .3), 0 2px 10px 0 rgba(var(--transparencycolor_v), .3);
	position: relative;
}
.rolePopout__73806::before,
.rolePopout__73806::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	border-radius: 5px;
	pointer-events: none;
	z-index: -1;
}
.rolePopout__73806::before {
	background: var(--popout_v) var(--popoutposition_v)/var(--popoutsize_v);
	background-attachment: fixed;
}
.rolePopout__73806::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.25));
	backdrop-filter: blur(var(--popoutblur_v));
}

/* ----		14.21.		FORUMFILTERPOPOUT				---- */

#app-mount .container_ae7412 {								/* popout												*/
	background-color: transparent;
	border: none;
	border-radius: 5px;
	box-shadow: 0 0 0 1px rgba(var(--transparencycolor_v), .3), 0 2px 10px 0 rgba(var(--transparencycolor_v), .3);
	position: relative;
}
.container_ae7412::before,
.container_ae7412::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	border-radius: 5px;
	pointer-events: none;
	z-index: -1;
}
.container_ae7412::before {
	background: var(--popout_v) var(--popoutposition_v)/var(--popoutsize_v);
	background-attachment: fixed;
}
.container_ae7412::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.25));
	backdrop-filter: blur(var(--popoutblur_v));
}

/* ----		14.22.		ACTIVITYSHAREPOPOUT				---- */

#app-mount .container_c344de {								/* popout												*/
	background-color: transparent;
	border: none;
	border-radius: 5px;
	box-shadow: 0 0 0 1px rgba(var(--transparencycolor_v), .3), 0 2px 10px 0 rgba(var(--transparencycolor_v), .3);
	position: relative;
}
.container_c344de::before,
.container_c344de::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	border-radius: 5px;
	pointer-events: none;
	z-index: -1;
}
.container_c344de::before {
	background: var(--popout_v) var(--popoutposition_v)/var(--popoutsize_v);
	background-attachment: fixed;
}
.container_c344de::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.25));
	backdrop-filter: blur(var(--popoutblur_v));
}

/* ----		14.23.		SOUNDBOARD					---- */

#app-mount .picker__6dca7 {								/* popout												*/
	background-color: transparent;
	border: none;
	border-radius: 5px;
	box-shadow: 0 0 0 1px rgba(var(--transparencycolor_v), .3), 0 2px 10px 0 rgba(var(--transparencycolor_v), .3);
	position: relative;
}
.picker__6dca7::before,
.picker__6dca7::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	border-radius: 5px;
	pointer-events: none;
	z-index: -1;
}
.picker__6dca7::before {
	background: var(--popout_v) var(--popoutposition_v)/var(--popoutsize_v);
	background-attachment: fixed;
}
.picker__6dca7::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.25));
	backdrop-filter: blur(var(--popoutblur_v));
}

/* ----		14.24.		SERVERSURVEY					---- */

.main__58b77 .prompt__671aa {
	background: rgba(var(--transparencycolor_v), .3);
}
.main__58b77 .prompt__671aa .sizeMedium_c6fa98 {
	width: unset;
}
.optionButtonWrapper__4072c:hover,
.optionButtonWrapper__4072c.selected__90dd8 {
	border-color: rgb(var(--accentcolor_v));
}

/* ~~~~		15.		GENERAL						~~~~ */

.highlight {
	background: rgba(var(--accentcolor_v), .3);
}

.clickable__17ccb:hover .layout_bb8e67 {
	background-color: rgba(var(--transparencycolor_v), .2);
}
.clickable__17ccb:active .layout_bb8e67 {
	background: rgb(var(--accentcolor_v));
}
.clickable__17ccb:active .layout_bb8e67,
.selected__9800b .layout_bb8e67,
.selected__9800b:hover .layout_bb8e67,
.selected__9800b:active .layout_bb8e67 {
	background-color: rgb(var(--accentcolor_v));
	text-shadow: 1px 1px var(--textshadow_v);
}
.clickable__17ccb .icon_fcc53a {
	color: inherit;
}
.clickable__17ccb:active .layout_bb8e67 svg,
.clickable__17ccb.selected__9800b .layout_bb8e67 svg {
	filter: drop-shadow(1px 1px var(--textshadow_v));
}
.clickable__17ccb:active .premiumIcon_ab5d78,
.clickable__17ccb.selected__9800b .premiumIcon_ab5d78 {
	color: var(--header-primary) !important;
}

#app-mount .elevationLow__75cba, #app-mount .elevationLow__2b6de, .lightElevationLow__6c965{
	box-shadow: 0 1px 5px 0 rgba(var(--transparencycolor_v), .3);
}
#app-mount .elevationHigh__80ea8, #app-mount .elevationHigh__312fd, .lightElevationHigh__1513c {
	box-shadow: 0 2px 10px 0 rgba(var(--transparencycolor_v), .3);
}
#app-mount .elevationBorderLow__610e6, #app-mount .elevationBorderLow__1fa50, .lightElevationBorderLow_c9bfa0 {
	box-shadow: 0 0 0 1px rgba(var(--transparencycolor_v), .3), 0 1px 5px 0 rgba(var(--transparencycolor_v), .3);
}
#app-mount .elevationBorderHigh_f9a758, #app-mount .elevationBorderHigh__39dae, .lightElevationBorderHigh_a30b06, .darkElevationBorderHigh__63ac9 {
	box-shadow: 0 0 0 1px rgba(var(--transparencycolor_v), .3), 0 2px 10px 0 rgba(var(--transparencycolor_v), .3);
}

#app-mount .breadcrumbWrapper__34bfa {							/* breadcrumbs				wrapper								*/
	color: rgba(var(--textbrightest_v),.3);
}
#app-mount .activeBreadcrumb__7e753 {							/* breadcrumbs				active								*/
	color: rgba(var(--textbrightest_v),.6);
}

/* ----		15.1.		TEXT						---- */

#app-mount h1.title__10613,
#app-mount h2.title__10613 {
	color: var(--header-primary);
}
#app-mount h3.title__10613 {
	color: var(--text-normal);
}
#app-mount h4.title__10613,
#app-mount h5.title__10613,
#app-mount h6.title__10613 {
	color: var(--header-secondary);
}

#app-mount .text__1c14c,
#app-mount .title__627cf {
	color: var(--text-muted);
}

#app-mount .title__10613 {
	color: var(--header-secondary);
}

#app-mount .markdown_e76780 {
	color: var(--text-normal);
}
#app-mount .markdown_e76780 th {
	background-color: var(--background-tertiary);
	border-color: var(--interactive-muted);
	color: var(--header-primary);
}
#app-mount .markdown_e76780 td {
	border-color: var(--interactive-muted);
}
#app-mount .markdown_e76780 tr {
	border-color: var(--interactive-muted);
	color: var(--header-secondary);
}
#app-mount .markdown_e76780 tr:nth-child(2n) {
	background-color: var(--background-secondary);
}
#app-mount .markdown_e76780 .blockquote__6da42 {
	border-left-color: var(--interactive-muted);
}
#app-mount .markdown_e76780 code {
	background-color: var(--background-secondary);
}
#app-mount .markdown_e76780 .codeInline__96ffa {
	color: var(--text-normal);
}

/* ----		15.2.		BUTTONS						---- */

.btn__51085.btnPrimary_e2a8df,
.lookFilled__19298.hoverBrand__98583.hasHover__3ab8c:hover,
.lookFilled__19298.hoverBrandNew_be3663.hasHover__3ab8c:hover,
.lookFilled__19298.colorBrand_b2253e:not(.buttonColor_a6eb73):not([style*="background-color"]),
.lookFilled__19298.colorBrandNew_fd170a:not(.buttonColor_a6eb73):not([style*="background-color"]) {
	text-shadow: 1px 1px var(--textshadow_v);
}
.lookFilled__19298.hoverBrand__98583.hasHover__3ab8c:hover svg,
.lookFilled__19298.hoverBrandNew_be3663.hasHover__3ab8c:hover svg,
.lookFilled__19298.colorBrand_b2253e:not(.buttonColor_a6eb73):not([style*="background-color"]) svg,
.lookFilled__19298.colorBrandNew_fd170a:not(.buttonColor_a6eb73):not([style*="background-color"]) svg {
	filter: drop-shadow(1px 1px var(--textshadow_v));
}

#app-mount .lookInverted_ee4261.colorPrimary__6ed40 .spinnerItem_c07231 {
	background-color: rgb(var(--textdarkest_v));
}
#app-mount .lookOutlined__46d54.colorPrimary__6ed40 .spinnerItem_c07231,
#app-mount .lookLink__93965.colorPrimary__6ed40 .spinnerItem_c07231 {
	background-color: rgb(var(--textdarkest_v));
}

#app-mount .lookFilled__19298.colorPrimary__6ed40:hover,
#app-mount .lookFilled__19298.hoverPrimary__3e6c3.hasHover__3ab8c:hover {
	background-color: rgba(var(--transparencycolor_v), .4);
}
#app-mount .lookFilled__19298.colorPrimary__6ed40:active,
#app-mount .lookFilled__19298.hoverPrimary__3e6c3.hasHover__3ab8c:active {
	background-color: rgba(var(--transparencycolor_v), .6);
}
#app-mount .lookFilled__19298.colorPrimary__6ed40,
#app-mount .lookFilled__19298.colorPrimary__6ed40:disabled {
	background-color: rgba(var(--transparencycolor_v), .2);
	color: #FFF;
}

#app-mount .lookInverted_ee4261.colorPrimary__6ed40:hover,
#app-mount .lookInverted_ee4261.hoverPrimary__3e6c3.hasHover__3ab8c:hover {
	background-image: linear-gradient(0deg, rgba(0, 0, 0, .1), rgba(0, 0, 0, .1));
}
#app-mount .lookInverted_ee4261.colorPrimary__6ed40:active,
#app-mount .lookInverted_ee4261.hoverPrimary__3e6c3.hasHover__3ab8c:active {
	background-image: linear-gradient(0deg, rgba(0, 0, 0, .2), rgba(0, 0, 0, .2));
}
#app-mount .lookInverted_ee4261.colorPrimary__6ed40,
#app-mount .lookInverted_ee4261.colorPrimary__6ed40:disabled {
	background-color: #FFF;
	color: rgba(var(--textdarkest_v));
}

#app-mount .lookOutlined__46d54.colorPrimary__6ed40:hover,
#app-mount .lookOutlined__46d54.hoverPrimary__3e6c3.hasHover__3ab8c:hover {
	background-color: rgba(var(--textdarkest_v), .05);
	border-color: rgba(var(--textdarkest_v), .6);
}
#app-mount .lookOutlined__46d54.colorPrimary__6ed40:active,
#app-mount .lookOutlined__46d54.hoverPrimary__3e6c3.hasHover__3ab8c:active {
	background-color: rgba(var(--textdarkest_v), .1);
	border-color: rgb(var(--textdarkest_v));
}
#app-mount .lookOutlined__46d54.colorPrimary__6ed40,
#app-mount .lookOutlined__46d54.colorPrimary__6ed40:disabled {
	border-color: rgba(var(--textdarkest_v), .1);
	color: rgb(var(--textdarkest_v));
}

#app-mount .lookLink__93965.colorPrimary__6ed40 {
	color: rgb(var(--textdarkest_v));
}
#app-mount .lookLink__93965.colorPrimary__6ed40:hover .contents_fb6220,
#app-mount .lookLink__93965.hoverPrimary__3e6c3.hasHover__3ab8c:hover .contents_fb6220 {
	--button--underline-color: rgb(var(--textdarkest_v));
	color: rgb(var(--textdarkest_v));
}

#app-mount .borderPrimary__60ecd {
	border-color: rgb(var(--textdarkest_v)) !important;
}

#app-mount .lookInverted_ee4261.colorTransparent__4c280 .spinnerItem_c07231 {
	background-color: rgba(var(--textbrightest_v),.1);
}
#app-mount .lookFilled__19298.colorTransparent__4c280 .spinnerItem_c07231,
#app-mount .lookOutlined__46d54.colorTransparent__4c280 .spinnerItem_c07231,
#app-mount .lookLink__93965.colorTransparent__4c280 .spinnerItem_c07231 {
	background-color: rgb(var(--textbrightest_v));
}

#app-mount .lookFilled__19298.colorTransparent__4c280:hover,
#app-mount .lookFilled__19298.hoverTransparent_a4eefd.hasHover__3ab8c:hover {
	background-color: rgba(var(--textbrightest_v),.05);
}
#app-mount .lookFilled__19298.colorTransparent__4c280:active,
#app-mount .lookFilled__19298.hoverTransparent_a4eefd.hasHover__3ab8c:active  {
	background-color: rgba(var(--textbrightest_v),.01);
}
#app-mount .lookFilled__19298.colorTransparent__4c280,
#app-mount .lookFilled__19298.colorTransparent__4c280:disabled {
	background-color: rgba(var(--textbrightest_v),.1);
	color: rgb(var(--textbrightest_v));
}

#app-mount .lookInverted_ee4261.colorTransparent__4c280:hover,
#app-mount .lookInverted_ee4261.hoverTransparent_a4eefd.hasHover__3ab8c:hover {
	background-color: rgba(var(--textbrightest_v),.05);
}
#app-mount .lookInverted_ee4261.colorTransparent__4c280:active,
#app-mount .lookInverted_ee4261.hoverTransparent_a4eefd.hasHover__3ab8c:active {
	background-color: rgba(var(--textbrightest_v),.1);
}
#app-mount .lookInverted_ee4261.colorTransparent__4c280,
#app-mount .lookInverted_ee4261.colorTransparent__4c280:disabled  {
	background-color: rgb(var(--textbrightest_v));
	color: rgba(var(--textbrightest_v),.1);
}

#app-mount .lookOutlined__46d54.hoverTransparent_a4eefd.hasHover__3ab8c:hover {
	background-color: rgba(var(--textbrighter_v),.1);
	border-color: rgb(var(--textbrightest_v));
}
#app-mount .lookOutlined__46d54.hoverTransparent_a4eefd.hasHover__3ab8c:active {
	background-color: rgba(var(--textbrightest_v),.1);
	border-color: rgb(var(--textbrightest_v));
}
#app-mount .lookOutlined__46d54.colorTransparent__4c280,
#app-mount .lookOutlined__46d54.colorTransparent__4c280:disabled {
	background-color: transparent;
	color: rgb(var(--textbright_v));
}

#app-mount .lookLink__93965.colorTransparent__4c280 {
	color: rgb(var(--textbright_v));
}
#app-mount .lookLink__93965.colorTransparent__4c280:hover .contents_fb6220,
#app-mount .lookLink__93965.hoverTransparent_a4eefd.hasHover__3ab8c:hover .contents_fb6220 {
	--button--underline-color: rgb(var(--textbright_v));
	color: rgb(var(--textbright_v));
}

#app-mount .borderTransparent__2cdc8 {
	border-color: rgb(var(--textbrightest_v)) !important;
}

/* ----		15.3.		INPUTS						---- */

input.input_d266e7 {									/* valueinput				bordered							*/
	background-color: rgba(var(--transparencycolor_v), .1);
}
input.input_d266e7:hover:not(:focus) {
	border-color: rgb(var(--transparencycolor_v));
}

#app-mount .prefixInput__38dcc {
	background-color: rgba(0,0,0,.1);
	border-color: rgba(0,0,0,.3);
}
#app-mount .prefixInput__38dcc:hover {
	border-color: rgba(0,0,0,.6);
}
#app-mount .prefixInputInput_b11731 {
	color: var(--header-primary);
}
#app-mount .prefixInputInput_b11731::-webkit-input-placeholder,
#app-mount .prefixInputInput_b11731::-moz-placeholder,
#app-mount .prefixInputInput_b11731:-ms-input-placeholder,
#app-mount .prefixInputInput_b11731::placeholder {
	color: var(--text-muted);
}
#app-mount .prefixInputPrefix__7a021 {
	color: var(--text-muted);
}

#app-mount .maxLength_f4921c {
	color: var(--text-muted);
}

#app-mount .copyInput_c1c679 {
	background-color: var(--deprecated-text-input-bg);
}
#app-mount .copyInputDefault__8ac9f {
	border-color: var(--deprecated-text-input-border);
}
#app-mount .hiddenMessage__19ef2,
#app-mount .inputDefault__0d65a {
	color: var(--header-primary);
}
#app-mount .hiddenMessage__19ef2::placeholder,
#app-mount .inputDefault__0d65a::placeholder {
	color: rgba(var(--textbrightest_v),.3);
}

.container__871ba {									/* checkboxswitch											*/
	background-color: rgba(var(--transparencycolor_v), .3) !important;
}
.container__871ba rect[fill] {
	fill: var(--header-primary) !important;
}
.container__871ba path[fill] {
	fill: rgb(var(--transparencycolor_v)) !important;
}

#app-mount .item_b7fb7e {								/* radiogroup				container							*/
	background-color: rgba(var(--transparencycolor_v), .2);
}
#app-mount .item_b7fb7e:hover {
	background-color: rgba(var(--transparencycolor_v), .4);
}
#app-mount .item_b7fb7e[aria-checked=true] .radioBar__40e1b {
	background: rgb(var(--accentcolor_v));
}
#app-mount .item_b7fb7e[aria-checked=true] .radioBar__40e1b .radioIconForeground__99b9b {
	color: var(--header-primary);
}
#app-mount .item_b7fb7e .radioBar__40e1b[style*="--radio-bar-accent-color"] {
	background: var(--radio-bar-accent-color);
	border: unset;
	color: var(--header-primary);
}
#app-mount .item_b7fb7e[aria-checked=false]:hover .radioBar__40e1b[style*="--radio-bar-accent-color"] {
	background: var(--radio-bar-accent-color) linear-gradient(to right, rgba(255, 255, 255, .2), rgba(255, 255, 255, .2));
}

#app-mount .checkboxContainer__5a761::before {						/* checkbox				container							*/
	background-color: rgba(var(--textdarker_v), .3);
}
#app-mount .checkboxMute__6e269::before {
	background-color: rgba(var(--transparencycolor_v), .2);
}
#app-mount .checkbox_c7f690 {								/* checkbox				inner								*/
	border-color: rgb(var(--textdark_v));
}
#app-mount .checkbox_c7f690.checked__24ad6 {						/* checkbox				checked								*/
	background-color: rgb(var(--textbrightest_v));
	border-color: rgb(var(--textbrightest_v));
}
#app-mount .checkbox_c7f690.checked__24ad6.round__67d8d {				/* checkbox				roundchecked							*/
	background-color: rgb(var(--accentcolor_v)) !important;
	border-color: rgb(var(--accentcolor_v)) !important;
}
#app-mount .checkbox_c7f690.checked__24ad6.round__67d8d svg {
	filter: drop-shadow(1px 1px var(--textshadow_v));
}
#app-mount .checkbox_c7f690.checked__24ad6.round__67d8d path[fill] {
	fill: #fff;
}

#app-mount .bar_e58961 {								/* slider				backgroundbar							*/
	background-color: rgba(var(--transparencycolor_v), .3);
}
.grabber_d2868c {									/* slider				grabber								*/
	background-color: var(--header-primary);
	border-color: var(--header-primary);
	box-shadow: 0 3px 1px 0 rgba(var(--transparencycolor_v), .05), 0 2px 2px 0 rgba(var(--transparencycolor_v), .1), 0 3px 3px 0 rgba(var(--transparencycolor_v), .05);
}
#app-mount .markValue_e7a6e4 {								/* slider				markvalue							*/
	color: var(--text-muted);
}
#app-mount .defaultValue__4f02f .markValue_e7a6e4 {
	color: #43b581;
}
#app-mount .markDash_dc3ae9 {
	background: transparent;
	color: rgba(var(--transparencycolor_v), .3);
}
#app-mount .defaultValue__4f02f .markDash_dc3ae9 {
	color: #43b581;
}
#app-mount .markDash_dc3ae9::before,
#app-mount .markDash_dc3ae9::after {
	content: "";
	position: absolute;
	background: currentColor;
	height: 8px;
	width: 2px;
}
#app-mount .markDash_dc3ae9::before {
	top: 14px;
}
#app-mount .markDash_dc3ae9::after {
	top: 30px;
}
#app-mount .bubble_f48089 {								/* slider				bubble								*/
	background-color: rgb(var(--accentcolor_v));
	color: #fff;
	text-shadow: 1px 1px var(--textshadow_v);
}
#app-mount .bubble_f48089::before {
	border-top-color: rgb(var(--accentcolor_v));
}

#app-mount .container__0c807 {								/* hotkeyinput				container							*/
	background-color: rgba(var(--transparencycolor_v), .1);
	border-color: rgba(var(--transparencycolor_v), .3);
}
#app-mount .editIcon__29477 {								/* hotkeyinput				editicon							*/
	-webkit-mask: url(https://discord.com/assets/c87be216431a35927431.svg) center/cover no-repeat;
	background: var(--header-primary);
}
#app-mount .container_e61cfb .button__0982c {
	background-color: rgba(var(--transparencycolor_v),.3) !important;
	color: var(--header-primary) !important;
}
#app-mount .container_e61cfb.recording__97366 .button__0982c {
	background-color: rgba(var(--dangercolor),.1) !important;
	color: rgb(var(--dangercolor)) !important;
}

.select__55f87 [class*="css-"][class*="-container"] {					/* select				container							*/
	background-color: transparent;
}
.lookFilled__3dba3.select__0eb48,
.select__55f87 [class*="css-"][class*="-control"] {
	background-color: rgba(var(--transparencycolor_v), .1);
	border-color: rgba(var(--transparencycolor_v), .3);
	color: var(--text-normal);
}
.lookFilled__3dba3.select__0eb48:hover {
	border-color: rgb(var(--transparencycolor_v));
}
.lookFilled__3dba3.select__0eb48:hover.open_cd27aa,
.lookFilled__3dba3.open_cd27aa {
	border-color: rgb(var(--transparencycolor_v)) rgb(var(--transparencycolor_v)) rgba(var(--transparencycolor_v), .3);
}
.lookFilled__3dba3.select__0eb48 .searchInput_e1c8d3 {
	background: transparent;
}
.select__55f87 [class*="css-"][class*="-control"]:hover,
.select__55f87 [class*="css-"][class*="-control"]:not(:last-child) {
	border-color: var(--deprecated-text-input-border-hover);
}
.select__55f87.languageSelector__4961a [class*="css-"][class*="-control"] {
	background-color: rgba(var(--transparencycolor_v), .3);
}
.select__55f87 [class*="css-"][class*="-singleValue"],
.select__55f87 [class*="css-"][class*="-placeholder"],
.select__55f87 [class*="css-"][class*="-indicatorContainer"] {
	color: var(--text-normal);
}
.option_be8b2e,
.css-1gfjib6-option,
.css-1yz4bi9-option,
.css-ru8b0x-option,
.css-1yz4bi9-option {
	background-color: rgba(var(--transparencycolor_v), .1);
	color: var(--interactive-normal);
}
.option_be8b2e:hover,
.css-pkcurw-option,
.css-rzbxvl-option,
.css-1qxn4c5-option,
.css-rzbxvl-option {
	background-color: rgba(var(--transparencycolor_v), .3);
	color: var(--interactive-hover);
}
.option_be8b2e[aria-selected=true]:not(.option_be8b2e.multi__8d15f),
.css-1gxgi19-option,
.css-1ba14n5-option,
.css-6qzljd-option,
.css-1ba14n5-option {
	background-color: rgba(var(--transparencycolor_v), .5);
	color: var(--interactive-active);
}
.popout_a6e77f::-webkit-scrollbar {
	display: none;
}
.popout_a6e77f,
.select__55f87 > [class*="css-"][class*="-container"] > [class*="css-"][class*="-menu"] {
	background-color: transparent;
	border: 1px solid rgba(var(--transparencycolor_v), .3);
	box-shadow: 0px 1px 5px 0px rgba(var(--transparencycolor_v), .3);
	overflow: hidden;
}
.popout_a6e77f.scrollerBase_dc3aa9 > .option_be8b2e {
	position: relative;
}
.popout_a6e77f::before,
.popout_a6e77f.scrollerBase_dc3aa9 > .option_be8b2e::before,
.popout_a6e77f.scrollerBase_dc3aa9 .content__23cab::before,
.select__55f87 > [class*="css-"][class*="-container"] > [class*="css-"][class*="-menu"]::before,
.popout_a6e77f::after,
.popout_a6e77f.scrollerBase_dc3aa9 > .option_be8b2e::after,
.popout_a6e77f.scrollerBase_dc3aa9 .content__23cab::after,
.select__55f87 > [class*="css-"][class*="-container"] > [class*="css-"][class*="-menu"]::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	pointer-events: none;
	z-index: -1;
}
.popout_a6e77f::before,
.popout_a6e77f.scrollerBase_dc3aa9 > .option_be8b2e::before,
.popout_a6e77f.scrollerBase_dc3aa9 .content__23cab::before,
.select__55f87 > [class*="css-"][class*="-container"] > [class*="css-"][class*="-menu"]::before {
	background: var(--popout_v) var(--popoutposition_v)/var(--popoutsize_v);
	background-attachment: fixed;
}
.popout_a6e77f::after,
.popout_a6e77f.scrollerBase_dc3aa9 > .option_be8b2e::after,
.popout_a6e77f.scrollerBase_dc3aa9 .content__23cab::after,
.select__55f87 > [class*="css-"][class*="-container"] > [class*="css-"][class*="-menu"]::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.2));
	backdrop-filter: blur(var(--popoutblur_v));
}
.popout_a6e77f.scrollerBase_dc3aa9::before,
.popout_a6e77f.scrollerBase_dc3aa9::after {
	display: none;
}

/* ----		15.4.		SEARCHBARS					---- */

.container_e4c233,									/* searchbar				inner								*/
.container__7712a {
	background-color: rgba(var(--transparencycolor_v), .3);
}
#app-mount .searchBox_a63854 .searchBoxInput__73c9c::placeholder {
	color: var(--text-muted);
}
#app-mount .searchIcon_e60ea8 {
	color: var(--text-muted);
}
#app-mount .filterLabel__3412d {
	color: var(--header-secondary);
}
#app-mount .searchBox_a63854 {
	background-color: rgba(var(--transparencycolor_v), .3);
	box-shadow: 0 2px 5px 0 rgba(var(--transparencycolor_v), .2);
}

/* ----		15.5.		TAGS						---- */

.botTagRegular_c89c9a:not([style]) {							/* bottag				regular								*/
	text-shadow: 1px 1px var(--textshadow_v);
}
.botTagRegular_c89c9a:not([style]) svg {
	filter: drop-shadow(1px 1px var(--textshadow_v));
}

.base__92a12[style*="var(--bdfdb-blurple)"],						/* numberbadge												*/
.base__92a12[style*="background-color: rgb(88, 101, 242)"],
.base__92a12[style*="background-color: rgb(114, 137, 218)"] {
	text-shadow: 1px 1px var(--textshadow_v);
}

.iconBadge__2abac {									/* iconbadge												*/
	background-color: rgba(var(--transparencycolor_v), .3);
}

/* ----		15.6.		IMAGES						---- */

#app-mount .image__0cdbe {
	background-image: url(https://discord.com/assets/5420f8fd9d89897c6448.svg);
	opacity: .75;
}

#app-mount .invalidPoop__03aa3 {
	background-color: rgba(var(--transparencycolor_v), .3);
	background-image: url(https://discord.com/assets/baa5b6db50bb89d55668.svg);
	opacity: .5;
}

#app-mount .sadImage_e4e5ab {
	background-image: url(https://discord.com/assets/746284e4cfc7cd6c5e15.svg);
	opacity: .5;
}

#app-mount .cancelImage__688be {
	background: url(https://discord.com/assets/d12b5c285831f85c5eee.svg);
	opacity: .75;
}

#app-mount .emptyWumpus__67af4 {
	background: url(https://discord.com/assets/b3dd9b1e282fff30af5b.svg);
	opacity: .5;
}

#app-mount .authenticationRequiredImage__92ba7 {
	background-image: url(https://discord.com/assets/ac36a2fad758d64ffbfb.svg);
	opacity: .5;
}
#app-mount .authenticationSuccessImage_b1a74c {
	background-image: url(https://discord.com/assets/22a55a08151860da8500.svg);
	opacity: .5;
}
#app-mount .authenticationFailImage-3DXXvB {
	background-image: url(https://discord.com/assets/5fc4852a2acb3abf0a64.svg);
	opacity: .5;
}

#app-mount .conflictUploadArt_c68c28 {
	background-image: url(https://discord.com/assets/27f92332674f9dacc1e9.svg);
	opacity: .5;
}
#app-mount .conflictDownloadArt__87c31 {
	background-image: url(https://discord.com/assets/f6bc645aead00959a690.svg);
	opacity: .5;
}
#app-mount .errorArt__7d1bf {
	background-image: url(https://discord.com/assets/c00cfaed1382bf7f33d4.svg);
	opacity: .5;
}

#app-mount .searchIndexBackground__14e66 {
	background-image: url(https://discord.com/assets/1876c6a6db747137a124.svg);
	opacity: .5;
}
#app-mount .resultsBlockedImage_e4bcd7 {
	background-image: url(https://discord.com/assets/83720a1a3ec0963a1f71.svg);
	opacity: .5;
}
#app-mount .noResultsImage__08760 {
	background-image: url(https://discord.com/assets/45cd76fed34c8e398cc8.svg);
	opacity: .5;
}
#app-mount .noResultsImage__08760.alt__77d89 {
	background-image: url(https://discord.com/assets/99d35a435f00582ddf41.svg);
	opacity: .5;
}
#app-mount .errorImage__416df {
	background-image: url(https://discord.com/assets/8eeb59bba0a61cbffc41.svg);
	opacity: .5;
}

#app-mount .emptyStateImage__3e0a5 {
	background: url(https://discord.com/assets/b3dd9b1e282fff30af5b.svg);
	opacity: .5;
}

#app-mount .wrapper__246a1 {								/* crash screen				background							*/
	background-image: url(https://discord.com/assets/14223d22c9628be36fc0.svg);
}
#app-mount .image_dabcb8 {								/* crash screen				center image							*/
	background-image: url(https://discord.com/assets/72eaa596042042be6259.svg);
	opacity: .5;
}

#app-mount .gameIcon__90c32 {
	background-color: rgba(var(--textbrightest_v), .1);
	color: var(--header-primary);
}

#app-mount .noResults_c99c73 {
	background-image: url(https://discord.com/assets/c586aac99de98cfb010d.svg);
	opacity: .5;
}

#app-mount .art_ba4492 {
	background-image: url(https://discord.com/assets/1a8d1cce8efe66c22c6d.svg);
	opacity: .5;
}

#app-mount .art__773bf {
	background-image: url(https://discord.com/assets/29306de8953471954035.svg);
	opacity: .5;
}

#app-mount .imageUnverified_fc0bf0 {
	background-image: url(https://discord.com/assets/f0cba42b6a6d3b2de4fd.svg);
	opacity: .5;
}

#app-mount .imageUpgrade__02fcc {
	background-image: url(https://discord.com/assets/7e81dd54960672eabe78.svg);
}
#app-mount .imageCancel_e3036f {
	background-image: url(https://discord.com/assets/d12b5c285831f85c5eee.svg);
}
#app-mount .imageUnclaimed__3f7ec {
	background-image: url(https://discord.com/assets/41675689ca055858e137.svg);
	opacity: .5;
}
#app-mount .imageUnverified__6dc24 {
	background-image: url(https://discord.com/assets/f0cba42b6a6d3b2de4fd.svg);
	opacity: .5;
}

#app-mount .emptyPreviewImage__86ba2 {
	background-image: url(https://discord.com/assets/3a354aac283f909d403d.svg);
	opacity: .5;
}

.fullArt_a1e55d,
.fullArt_cba315 {
	opacity: .5;
}

.image__0a0fc {
	opacity: .5;
}
.image__0a0fc[style*='url("/assets/9e2f412156e2ac1f14e9.svg")'] {
	background-image: url(https://discord.com/assets/64df6f04b850029d2e78.svg) !important;
}

.image__98a59 {
	opacity: .5;
}
.image__98a59[style*='url("/assets/d6dfb89ab06b62044dbb.svg")'] {
	background-image: url(https://discord.com/assets/8eeb59bba0a61cbffc41.svg) !important;
}
.image__98a59[style*='url("/assets/75081bdaad2d359c1469.svg")'] {
	background-image: url(https://discord.com/assets/45cd76fed34c8e398cc8.svg) !important;
}

.image__98a59[style*='url("/assets/0629e34902ae58f8e4ca.svg")'] {
	background-image: url(https://discord.com/assets/24aa06be5457e66bdd64.svg) !important;
}
.image__98a59[style*='url("/assets/5741692705ba077f4190.svg")'] {
	background-image: url(https://discord.com/assets/bca918618b884a382ab5.svg) !important;
}
.image__98a59[style*='url("/assets/a72746e7108167af95c8.svg")'] {
	background-image: url(https://discord.com/assets/01864c39871ce619d855.svg) !important;
}
.image__98a59[style*='url("/assets/ee4637f8627629dd0da5.svg")'] {
	background-image: url(https://discord.com/assets/532f1d4582d881960783.svg) !important;
}

.image__98a59[style*='url("/assets/c8be48745cf680093019.svg")'] {
	background-image: url(https://discord.com/assets/295da3fc92e2adb1b852.svg) !important;
}
.image__98a59[style*='url("/assets/5e3480eff150b1cb323e.svg")'] {
	background-image: url(https://discord.com/assets/cf8f9096a9322f2ae0d7.svg) !important;
}
.emptyStateImage__36649 {
	opacity: .5;
}
.emptyStateImage__36649[src='/assets/39e3f389716400ced39a.svg'] {
	background-image: url(https://discord.com/assets/1bb2be01aece015602f7.svg);
	object-position: -999999px -999999px;
}
.image__98a59[style*='url("/assets/c65431f185feb7b00749.svg")'] {
	background-image: url(https://discord.com/assets/cdc3f4f6fbf3a0f0766f.svg) !important;
}
.image__98a59[style*='url("/assets/a1b0a14d2f22c155a2b3.svg")'] {
	background-image: url(https://discord.com/assets/c7c4065874955761be3b.svg) !important;
}

img[src='/assets/73984240bd99493de947.svg'] {
	background-image: url(https://discord.com/assets/c1875fc8a42a61903ba1.svg);
	opacity: .5;
	object-position: -999999px -999999px;
}

img[src='/assets/387a7c504c96b992872d.svg'] {
	background-image: url(https://discord.com/assets/1964f50ca0220e98dc32.svg);
	opacity: .5;
	object-position: -999999px -999999px;
}

#app-mount .footerImage__21e33 {
	background-image: url(https://discord.com/assets/a4bee30fe0b5a0f5b3c7.svg);
	opacity: .5;
}

#app-mount .imageError__77b3e {
	opacity: .5;
}

#app-mount .emptyImage__66bed {
	background-image: url(https://discord.com/assets/1766a563ac224f0a403d.svg);
	opacity: .5;
}

#app-mount .missingEntitlementImage_c06466 {
	background-image: url(https://discord.com/assets/b3dd9b1e282fff30af5b.svg);
	opacity: .5;
}

#app-mount .image__81490 {
	background-image: url(https://discord.com/assets/a7d6af4279f16c27ae9b.svg);
	opacity: .5;
}

#app-mount .image__25781 {
	background-image: url(https://discord.com/assets/9e9722bd5c8ec20fd746.svg);
	opacity: .5;
}

#app-mount .image__1990e {
	background-image: url(https://discord.com/assets/c8718df1382ba878f1fc.svg);
	opacity: .5;
}

#app-mount .image__88b66 {
	background-image: url(https://discord.com/assets/1766a563ac224f0a403d.svg);
	opacity: .5;
}

/* ----		15.7.		SCROLLBARS					---- */

::-webkit-scrollbar,
#app-mount ::-webkit-scrollbar {
	width: 8px;
	height: 8px;
}
#app-mount .scroller-3vODG7::-webkit-scrollbar {
	width: 6px;
	height: 6px;
}
#app-mount .scroller__447fe::-webkit-scrollbar,
#app-mount .scrollbar_d66c5e::-webkit-scrollbar,
#app-mount .scroller-2PSBSf::-webkit-scrollbar {
	width: 4px;
	height: 4px;
}
::-webkit-scrollbar,
::-webkit-scrollbar-track,
::-webkit-scrollbar-track-piece,
#app-mount ::-webkit-scrollbar,
#app-mount ::-webkit-scrollbar-track,
#app-mount ::-webkit-scrollbar-track-piece {
	border-color: transparent !important;
	background: transparent !important;
}
::-webkit-scrollbar-thumb,
#app-mount ::-webkit-scrollbar-thumb {
	border-radius: 10px;
	border: none;
	background-color: rgb(var(--accentcolor_v)) !important;
}
.none__51a8f::-webkit-scrollbar-corner,
.none__51a8f::-webkit-scrollbar-thumb,
.none__51a8f::-webkit-scrollbar-track,
.none__51a8f::-webkit-scrollbar {
	display: none;
}

/* ----		15.8.		NOTIFICATIONBAR					---- */

.base__3e6af .notice__5fd4c powercord-announcement {
	border-radius: 0;
}
#app-mount .notice-2FJMB4 {
	box-shadow: 0 1px 5px 0 rgba(var(--transparencycolor_v), .3);
}
#app-mount .notice__99c03 {
	background-color: rgba(var(--transparencycolor_v), .6);
}

/* ----		15.9.		TOOLTIPS					---- */

#app-mount .guildNameText__16f3c {
	color: #fff;
}
#app-mount .muteText_dc1e9a {
	color: #bbb;
}
#app-mount .tooltipPrimary_e5c00d,
#app-mount .tooltipGrey_a35fcf,
#app-mount .tooltipBlack__90eaa {
	background-color: rgb(var(--accentcolor_v));
	color: #fff;
	text-shadow: 1px 1px var(--textshadow_v);
}
#app-mount .tooltipPrimary_e5c00d .note_e4Jh6_,
#app-mount .tooltipGrey_a35fcf .note_e4Jh6_,
#app-mount .tooltipBlack__90eaa .note_e4Jh6_ {
	color: #bbb;
}
#app-mount .tooltipPrimary_e5c00d a,
#app-mount .tooltipGrey_a35fcf a,
#app-mount .tooltipBlack__90eaa a {
	filter: brightness(50%);
}
#app-mount .tooltipPrimary_e5c00d .tooltipPointer_a79354,
#app-mount .tooltipGrey_a35fcf .tooltipPointer_a79354,
#app-mount .tooltipBlack__90eaa .tooltipPointer_a79354 {
	border-top-color: rgb(var(--accentcolor_v));
}
.emptyUser_dba665 {
	background: rgba(var(--transparencycolor_v), .5);
}
.moreUsers_cd5dfc {
	background: rgba(var(--transparencycolor_v), .5);
}


/* ~~~~		16.		BDSUPPORT					~~~~ */

html .bd-toast {
	background-color: rgb(var(--accentcolor_v));
	box-shadow: 0 0 0 1px rgba(var(--transparencycolor_v), .3), 0 2px 10px 0 rgba(var(--transparencycolor_v), .3);
	color: #fff;
	text-shadow: 1px 1px var(--textshadow_v);
}
html .bd-toast.icon {
	background-image: none !important;
}
html .bd-toast.icon::before {
	content: "";
	position: absolute;
	top: 0;
	right: 0;
	bottom: 0;
	left: 0;
	background: #fff !important;
	-webkit-mask: url('data:image/svg+xml; utf8, <svg xmlns="http://www.w3.org/2000/svg"><path fill="black" d=""/></svg>') center/cover no-repeat;
}
html .bd-toast.toast-danger.icon::before,
html .bd-toast.toast-error.icon::before {
	-webkit-mask: url('data:image/svg+xml; utf8, <svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24"><path fill="black" d="M12 2C6.47 2 2 6.47 2 12s4.47 10 10 10 10-4.47 10-10S17.53 2 12 2zm5 13.59L15.59 17 12 13.41 8.41 17 7 15.59 10.59 12 7 8.41 8.41 7 12 10.59 15.59 7 17 8.41 13.41 12 17 15.59z"/></svg>') 6px 50%/20px 20px no-repeat;
}
html .bd-toast.toast-info.icon::before {
	-webkit-mask: url('data:image/svg+xml; utf8, <svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24"><path fill="black" d="M 12 2 C 6.48 2 2 6.48 2 12 s 4.48 10 10 10 10-4.48 10-10 S 17.52 2 12 2 z m 1 15 h -2 v -6 h 2 v 6 z m 0-8 h -2 V 7 h 2 v 2 z"/></svg>') 6px 50%/20px 20px no-repeat;
}
html .bd-toast.toast-success.icon::before {
	-webkit-mask: url('data:image/svg+xml; utf8, <svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24"><path fill="black" d="M 12 2 C 6.48 2 2 6.48 2 12 s 4.48 10 10 10 10-4.48 10-10 S 17.52 2 12 2 z m -2 15 l -5-5 1.41-1.41 L 10 14.17 l 7.59-7.59 L 19 8 l -9 9 z"/></svg>') 6px 50%/20px 20px no-repeat;
}
html .bd-toast.toast-warning.icon::before,
html .bd-toast.toast-warn.icon::before {
	-webkit-mask: url('data:image/svg+xml; utf8, <svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" width="24" height="24"><path fill="black" d="M 1 21 h 22 L 12 2 1 21 z m 12-3 h -2 v -2 h 2 v 2 z m 0-4 h -2 v -4 h 2 v 4 z"/></svg>') 6px 50%/20px 20px no-repeat;
}

#app-mount .fav {
	background: var(--interactive-active);
	width: 16px;
	height: 16px;
	padding: 0;
	-webkit-mask: url(https://mwittrien.github.io/BetterDiscordAddons/Themes/_res/svgs/common/fav_star_empty.svg) center/contain no-repeat;
}
#app-mount .fav:hover,
#app-mount .fav.active {
	background: #faa61a;
}
#app-mount .fav.active {
	-webkit-mask: url(https://mwittrien.github.io/BetterDiscordAddons/Themes/_res/svgs/common/fav_star.svg) center/contain no-repeat;
}

#app-mount .bd-tab-item:hover {
	background-color: rgba(var(--transparencycolor_v), .3);
}
#app-mount .bd-tab-item.selected {
	background-color: rgb(var(--accentcolor_v));
	color: #fff;
	text-shadow: 1px 1px var(--textshadow_v);
}

#app-mount .bd-server-card {								/* pubslayer				guildcard							*/
	background-color: rgba(var(--transparencycolor_v), .3);
}
#app-mount .bd-server-icon {								/* pubslayer				guildicon							*/
	background-color: rgba(var(--transparencycolor_v), .2);
	border-color: transparent;
}
#app-mount .bd-server-card:hover,
#app-mount .bd-server-icon:hover {
	background-color: rgba(var(--transparencycolor_v), .4);
}

.bd-switch-body {									/* bd switch												*/
	--switch-color: rgb(var(--transparencycolor_v));
	background-color: rgba(var(--transparencycolor_v), .3);
}

.bd-slider-label {									/* bd slider				label								*/
	background-color: rgb(var(--accentcolor_v));
	color: var(--header-primary);
	text-shadow: 1px 1px var(--textshadow_v);
}
.bd-slider-input {									/* bd slider				input								*/
	background-color: rgba(var(--transparencycolor_v), .3);
}
.bd-slider-input[type="range"]::-webkit-slider-thumb {
	background-color: var(--header-primary);
	border-color: var(--header-primary);
	box-shadow: 0 3px 1px 0 rgba(var(--transparencycolor_v), .05), 0 2px 2px 0 rgba(var(--transparencycolor_v), .1), 0 3px 3px 0 rgba(var(--transparencycolor_v), .05);

}
.bd-select {
	background-color: rgba(var(--transparencycolor_v), .1);
	border-color: rgba(var(--transparencycolor_v), .3);
	color: var(--text-normal);
	border: 1px solid transparent;
	padding: 8px 8px 8px 12px;
	cursor: pointer;
	box-sizing: border-box;
	display: grid;
	grid-template-columns: 1fr auto;
	align-items: center;
	border-radius: 4px;
}
.bd-select .bd-select-options {								/* bd select				popout								*/
	background-color: transparent;
	border: none;
	border-radius: 4px;
	box-shadow: rgba(var(--transparencycolor_v), .3) 0px 2px 5px 0px;
	box-sizing: border-box;
	padding: 6px 8px;
}
.bd-select .bd-select-options::before,
.bd-select .bd-select-options::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	border-radius: 4px;
	pointer-events: none;
	z-index: -1;
}
.bd-select .bd-select-options::before {
	background: var(--popout_v) var(--popoutposition_v)/var(--popoutsize_v);
	background-attachment: fixed;
}
.bd-select .bd-select-options::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.3));
	backdrop-filter: blur(var(--popoutblur_v));
}
.bd-select .bd-select-option {								/* bd select				popout option							*/
	display: flex;
	align-items: center;
	min-height: 32px;
	border-radius: 2px;
	box-sizing: border-box;
	color: var(--interactive-normal);
	font-size: 14px;
	font-weight: 500;
	line-height: 18px;
	margin-top: 2px;
	margin-bottom: 2px;
	padding: 0 8px;
}
.bd-select .bd-select-option:hover {
	background-color: rgba(var(--transparencycolor_v), .2);
	color: var(--interactive-hover);
}
.bd-select .bd-select-option.selected {
	background-color: rgba(var(--transparencycolor_v), .3);
	color: var(--interactive-active);
}

.bd-pfbtn {										/* addonlist				folder button							*/
	text-shadow: 1px 1px var(--textshadow_v);
}

.bd-server-tag {									/* addonlist				public list tag							*/
	text-shadow: 1px 1px var(--textshadow_v);
}


.bd-error-modal-content {
	padding: 0 10px 16px 10px;
}
#app-mount .bd-addon-error {
	background-color: rgba(var(--transparencycolor_v), 0.2);
	border-color: rgba(var(--transparencycolor_v), 0.2);
}
#app-mount .bd-addon-error.expanded,
#app-mount .bd-addon-error:hover {
	background-color: rgba(var(--transparencycolor_v), 0.3);
}

.bd-addon-views .bd-view-button:not(.selected):hover {
	background: rgba(var(--transparencycolor_v), .3);
}
.bd-addon-views .bd-view-button:not(.selected):active {
	background: rgba(var(--accentcolor_v), .7);
}
.bd-addon-views .bd-view-button.selected svg {
	filter: drop-shadow(1px 1px var(--textshadow_v));
}

.bd-button {
	text-shadow: 1px 1px var(--textshadow_v);
}
.bd-button svg {
	filter: drop-shadow(1px 1px var(--textshadow_v));
}
.bd-button.bd-button-danger svg {
	filter: unset;
}

.floating-window.resizable {								/* customcss editor			detached							*/
	background: rgb(var(--transparencycolor_v));
}
html .monaco-editor .reference-zone-widget .ref-tree .referenceMatch .highlight {
	background: rgb(var(--accentcolor_v));
}


/* ~~~~		17.		POWERCORDSUPPORT				~~~~ */

html .powercord-toast {
	background-color: transparent;
	border: none;
	box-shadow: 0 0 0 1px rgba(var(--transparencycolor_v), .3), 0 2px 10px 0 rgba(var(--transparencycolor_v), .3);
	overflow: hidden;
}
html .powercord-toast::before,
html .powercord-toast::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	border-radius: 5px;
	pointer-events: none;
	z-index: -1;
}
html .powercord-toast::before {
	background: var(--popout_v) var(--popoutposition_v)/var(--popoutsize_v);
	background-attachment: fixed;
}
html .powercord-toast::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.25));
	backdrop-filter: blur(var(--popoutblur_v));
}
html .powercord-toast .header {
	background-color: rgba(var(--transparencycolor_v), .2);
	box-shadow: 0 2px 3px 0 rgba(var(--transparencycolor_v), .2);
	color: var(--header-primary);
}
html .powercord-toast .contents .inner {
	background-color: rgba(var(--transparencycolor_v), .2);
	border: none;
	color: var(--header-secondary);
}


/* ~~~~		18.		PLUGINSUPPORT					~~~~ */

/* ----		18.1.		BDFDB						---- */

html .colorDefault_XdNdIp .bg_8df5St {
	background: transparent;
	opacity: 1;
}
html .colorDefault_XdNdIp .bg_8df5St::before,
html .colorDefault_XdNdIp .bg_8df5St::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	pointer-events: none;
	z-index: -1;
}
html .colorDefault_XdNdIp .bg_8df5St::before {
	background: var(--popout_v) var(--popoutposition_v)/var(--popoutsize_v);
	background-attachment: fixed;
}
html .colorDefault_XdNdIp .bg_8df5St::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.25));
	backdrop-filter: blur(var(--popoutblur_v));
}

/* ----		18.2.		DATEVIEWER					---- */

#app-mount #dv-mount {
	background: transparent;
	z-index: 1;
}
#app-mount #dv-mount::before,
#app-mount #dv-mount::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	pointer-events: none;
	z-index: -1;
}
#app-mount #dv-mount::before {
	background: var(--background_v) var(--backgroundposition_v)/var(--backgroundsize_v);
	background-attachment: fixed;
}
#app-mount #dv-mount::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + var(--memberlisttransparency_v) * 0.85));
	backdrop-filter: blur(var(--backgroundblur_v));
}
#app-mount #dv-main {
	border-top-color: rgba(var(--transparencycolor_v), .2);
	color: var(--header-primary);
}
#app-mount #dv-main .dv-date {
	color: var(--header-secondary);
	opacity: 1;
}

/* ----		18.3.		MEMBERCOUNT					---- */

#app-mount #MemberCount {
	background-color: transparent;
	width: calc(100% - 8px);
	margin: 0;
	line-height: 0;
	height: 30px;
}
#MemberCount::before,
#MemberCount::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	pointer-events: none;
	z-index: -1;
}
#MemberCount::before {
	background: var(--background_v) var(--backgroundposition_v)/var(--backgroundsize_v);
	background-attachment: fixed;
}
#MemberCount::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + var(--memberlisttransparency_v) * 0.85));
	backdrop-filter: blur(var(--backgroundblur_v));
}

/* ----		18.4.		LINENUMBERS					---- */

.hljs ol li {
	border-left-color: var(--background-modifier-accent);
}
.hljs ol li::before {
	color: rgb(var(--textdarker_v));
}

/* ----		18.5.		PERMISSIONVIEWER				---- */

html #permissions-modal-wrapper {							/* modal				wrapper								*/
	z-index: 1001;
}
html #permissions-modal-wrapper #permissions-modal {					/* modal				container							*/
	background-color: transparent;
	border: none;
	box-shadow: 0 0 0 1px rgba(var(--transparencycolor_v), .3), 0 2px 10px 0 rgba(var(--transparencycolor_v), .3);
	position: relative;
	overflow: hidden;
}
html #permissions-modal-wrapper #permissions-modal::before,
html #permissions-modal-wrapper #permissions-modal::after {
	content: "";
	position: absolute;
	top: 0;
	bottom: 0;
	right: 0;
	left: 0;
	width: unset;
	height: unset;
	pointer-events: none;
	z-index: -1;
}
html #permissions-modal-wrapper #permissions-modal::before {
	background: var(--popout_v) var(--popoutposition_v)/var(--popoutsize_v);
	background-attachment: fixed;
}
html #permissions-modal-wrapper #permissions-modal::after {
	background-color: rgba(var(--transparencycolor_v), calc(var(--transparencyalpha_v) + 0.2));
	backdrop-filter: blur(var(--popoutblur_v));
}
html #permissions-modal-wrapper .header {
	background-color: rgba(var(--transparencycolor_v), .2);
	box-shadow: 0 2px 3px 0 rgba(var(--transparencycolor_v), .2);
	color: var(--header-primary);
}
html #permissions-modal-wrapper .modal-body {
	background-color: transparent;
}
html #permissions-modal-wrapper .scroller-title {
	border-bottom: 1px solid rgba(var(--transparencycolor_v), .3);
}
html #permissions-modal-wrapper .role-side {
	background-color: rgba(var(--transparencycolor_v), .1);
}
html #permissions-modal-wrapper .role-item {
	color: var(--text-normal);
}
html #permissions-modal-wrapper .role-item:hover {
	background-color: rgba(var(--transparencycolor_v), .1);
}
html #permissions-modal-wrapper .role-item.selected {
	background-color: rgba(var(--transparencycolor_v), .2);
}
html #permissions-modal-wrapper .perm-side {
	background-color: transparent;
}
html #permissions-modal-wrapper .perm-item {
	box-shadow: inset 0 -1px 0 var(--background-modifier-accent);
}
html #permissions-modal-wrapper .perm-name {
	color: var(--header-secondary);
}

/* ----		18.6.		DIRECTDOWNLOAD					---- */

#files_directDownload .file {
	background-color: rgba(var(--transparencycolor_v), .4);
	border-color: rgba(var(--accentcolor_v), .2);
	border-radius: 6px 6px 0 0;
}
#files_directDownload .file svg {
	fill: var(--interactive-active);
	opacity: 0.5;
}
#files_directDownload .file svg:hover {
	opacity: 1;
}
#files_directDownload .file span {
	color: var(--header-primary);
}
#files_directDownload .file .progress-bar {
	background-color: rgb(var(--accentcolor_v));
}

/* ----		18.7.		BETTERFORMATINGREDUX				---- */

.innerDisabled-2mc-iF ~ .bf-toolbar {
	display: none;
}
.bf-arrow {
	-webkit-mask: url('data:image/svg+xml; utf8, <svg xmlns="http://www.w3.org/2000/svg" height="24" viewBox="0 0 24 24" width="24"><path fill="black" d="M7.41 15.41L12 10.83l4.59 4.58L18 14l-6-6-6 6z"/></svg>') center/contain no-repeat;
	background: var(--interactive-active) !important;
}
.bf-toolbar {
	background: transparent;
	overflow: hidden;
	transform: none;
	top: -50px;
}
.bf-toolbar::after {	
	content: "";
	display: block;
	position: absolute;
	width: 100%;
	height: calc(100% - 15px);
	pointer-events: none;
	left: 0px;
	top: 5px;
	background-color: rgba(var(--transparencycolor_v), .5);
	border-radius: 3px;
	transform: translate(0, 55px);
	transition: all 200ms ease;
	z-index: 200;
}
.bf-toolbar.bf-visible::after,
.bf-toolbar.bf-hover:hover::after {
	transform: translate(0, 0);
	transition: all 200ms cubic-bezier(0,0,0,1);
}
.bf-toolbar::before {
	background: var(--popout_v) var(--popoutposition_v)/var(--popoutsize_v);
	background-attachment: fixed;
	filter: blur(var(--popoutblur_v));
	z-index: 100;
}
.theme-brand .bf-toolbar::after {
	background: rgb(var(--accentcolor_v)) linear-gradient(rgba(var(--transparencycolor_v), .2), rgba(var(--transparencycolor_v), .2)) !important;
}
.theme-brand .bf-toolbar::before {
	display: none;
}
.bf-toolbar > * {
	z-index: 300;
}
.bf-toolbar .format {
	color: var(--text-normal);
}
.bf-toolbar .format:hover {
	background-color: rgb(var(--accentcolor_v));
	color: #fff;
}

/* ----		18.8		CHANNELHISTORY					---- */

.channelHistoryButtons {
	top: 4px;
	left: 310px;
}

/* ----		18.9		CHANNELTABS					---- */

html #channelTabs-container {
	background: rgba(var(--transparencycolor_v), calc(var(--guildchanneltransparency_v) * 2));
}
html #channelTabs-settingsMenu,
html .channelTabs-tabNav > div,
html .channelTabs-tab,
html .channelTabs-fav {
	cursor: pointer;
}
html .channelTabs-tab:not(.channelTabs-selected):hover,
html .channelTabs-fav:hover {
	background: rgba(var(--transparencycolor_v), 0.2);
}
html #channelTabs-settingsMenu:hover,
html .channelTabs-tabContainer .channelTabs-tabNav > div:hover,
html .channelTabs-tab.channelTabs-selected,
html .channelTabs-tabContainer .channelTabs-newTab:hover {
	background: rgb(var(--accentcolor_v));
}
html #channelTabs-settingsMenu:hover [fill]:not([fill="none"]),
html .channelTabs-tabContainer .channelTabs-tabNav > div:hover [fill]:not([fill="none"]),
html .channelTabs-tabContainer .channelTabs-newTab:hover [fill]:not([fill="none"]) {
	fill: var(--header-primary);
}
html .channelTabs-tabContainer .channelTabs-tabNav > .channelTabs-tabNavClose:hover {
	background: rgb(var(--dangercolor));
}

/* ----		18.10		TYPINGINDICATOR					---- */

html .typingindicator-guild,
html .typingindicator-dms,
html .typingindicator-folder {
	background: rgb(var(--transparencycolor_v), .2);
	border: 4px solid rgb(var(--transparencycolor_v), .2);
	box-shadow: unset;
	right: 8px;
	bottom: -5px;
	padding: 2px 0;
}

/* ----		18.11		CHANNELDMS					---- */

.ChannelDms-channelmembers-wrap .ChannelDms-channelmembers-header {
	background-color: rgba(var(--transparencycolor_v), var(--memberlisttransparency_v));
}


/* ~~~~		19.		UPDATENOTICE					~~~~ */

html:only-child > head + body div.app_b1f720 > div.app_de4237::before {
	content: "Your Version of   BasicBackground   by DevilBro is outdated. Please download the newest Version:	https://mwittrien.github.io/downloader/?theme=BasicBackground" !important;
	display: var(--version1_0_5, block) !important;
	background-color: #4a90e2 !important;
	box-shadow: 0 1px 5px 0 rgba(var(--transparencycolor_v), .3) !important;
	color: var(--header-primary) !important;
	flex-grow: 0 !important;
	flex-shrink: 0 !important;
	font-size: 14px !important;
	font-weight: 500 !important;
	height: 36px !important;
	line-height: 36px !important;
	opacity: 1 !important;
	padding-left: 4px !important;
	padding-right: 28px !important;
	position: relative !important;
	text-align: center !important;
	visibility: unset !important;
	white-space: pre !important;
	top: 0 !important;
	left: 0 !important;
	bottom: unset !important;
	right: unset !important;
	max-width: unset !important;
	min-width: unset !important;
	max-height: unset !important;
	min-height: unset !important;
	transform: unset !important;
	animation: unset !important;
	z-index: 101 !important;
	pointer-events: none !important;
}


/* ~~~~		20.		WATERMARK					~~~~ */

html:only-child > head + body div.typeWindows__5fa63.titleBar__01af6 > div.wordmark__0d178 {
	display: block !important;
	position: absolute !important;
	max-width: unset !important;
	min-width: unset !important;
	width: 55px !important;
	max-height: unset !important;
	min-height: unset !important;
	height: 16px !important;
	margin: 0 !important;
	padding: 3px 9px 3px !important;
	top: 0 !important;
	left: 0 !important;
	bottom: unset !important;
	right: unset !important;
	opacity: 1 !important;
	visibility: visible !important;
	transform: unset !important;
	animation: unset !important;
}
html:only-child > head + body div.typeWindows__5fa63.titleBar__01af6 > div.wordmark__0d178[style*="display: none"] {
	display: none !important;
}
html:only-child > head + body div.typeWindows__5fa63.titleBar__01af6 > div.wordmark__0d178 > * {
	display: none !important;
}
html:only-child > head + body div.typeWindows__5fa63.titleBar__01af6 > div.wordmark__0d178::before {
	content: "" !important;
	background: rgb(125,125,125) !important;
	-webkit-mask: url('data:image/svg+xml; utf8, <svg width="55" height="19" version="1.1" xmlns="http://www.w3.org/2000/svg"><path fill="black" d="M3.57642276,0.141304348 L0,0.141304348 L0,4.22826087 L2.38069106,6.40217391 L2.38069106,2.43478261 L3.66260163,2.43478261 C4.47052846,2.43478261 4.86910569,2.83695652 4.86910569,3.4673913 L4.86910569,6.5 C4.86910569,7.13043478 4.49207317,7.55434783 3.66260163,7.55434783 L0,7.55434783 L0,9.85869565 L3.57642276,9.85869565 C5.49390244,9.86956522 7.29288618,8.90217391 7.29288618,6.66304348 L7.29288618,3.39130435 C7.29288618,1.13043478 5.49390244,0.141304348 3.57642276,0.141304348 Z M22.3310976,6.67391304 L22.3310976,3.32608696 C22.3310976,2.11956522 24.4640244,1.83695652 25.1103659,3.05434783 L27.0817073,2.23913043 C26.3168699,0.510869565 24.8949187,0 23.7207317,0 C21.803252,0 19.9073171,1.13043478 19.9073171,3.32608696 L19.9073171,6.67391304 C19.9073171,8.88043478 21.803252,10 23.6776423,10 C24.8841463,10 26.3276423,9.39130435 27.1247967,7.81521739 L25.0134146,6.82608696 C24.4963415,8.17391304 22.3310976,7.84782609 22.3310976,6.67391304 Z M15.8030488,3.7826087 C15.0597561,3.61956522 14.5642276,3.34782609 14.5319106,2.88043478 C14.575,1.75 16.2878049,1.7173913 17.2896341,2.79347826 L18.8731707,1.55434783 C17.8821138,0.326086957 16.7617886,0 15.598374,0 C13.8424797,0 12.1404472,1 12.1404472,2.91304348 C12.1404472,4.77173913 13.5408537,5.76086957 15.0813008,6 C15.8676829,6.10869565 16.7402439,6.42391304 16.7186992,6.97826087 C16.654065,8.02173913 14.5426829,7.9673913 13.5839431,6.7826087 L12.0650407,8.23913043 C12.9591463,9.40217391 14.1764228,10 15.3182927,10 C17.074187,10 19.0239837,8.9673913 19.0993902,7.08695652 C19.2071138,4.69565217 17.5050813,4.09782609 15.8030488,3.7826087 Z M8.59634146,9.85869565 L11.0093496,9.85869565 L11.0093496,0.141304348 L8.59634146,0.141304348 L8.59634146,9.85869565 Z M49.2835366,0.141304348 L45.7071138,0.141304348 L45.7071138,4.22826087 L48.0878049,6.40217391 L48.0878049,2.43478261 L49.3589431,2.43478261 C50.1668699,2.43478261 50.5654472,2.83695652 50.5654472,3.4673913 L50.5654472,6.5 C50.5654472,7.13043478 50.1884146,7.55434783 49.3589431,7.55434783 L45.6963415,7.55434783 L45.6963415,9.85869565 L49.2727642,9.85869565 C51.1902439,9.86956522 52.9892276,8.90217391 52.9892276,6.66304348 L52.9892276,3.39130435 C53,1.13043478 51.2010163,0.141304348 49.2835366,0.141304348 Z M31.7353659,0 C29.753252,0 27.7819106,1.09782609 27.7819106,3.33695652 L27.7819106,6.66304348 C27.7819106,8.89130435 29.7640244,10 31.7569106,10 C33.7390244,10 35.7103659,8.89130435 35.7103659,6.66304348 L35.7103659,3.33695652 C35.7103659,1.10869565 33.7174797,0 31.7353659,0 Z M33.2865854,6.66304348 C33.2865854,7.35869565 32.5109756,7.7173913 31.7461382,7.7173913 C30.9705285,7.7173913 30.1949187,7.36956522 30.1949187,6.66304348 L30.1949187,3.33695652 C30.1949187,2.61956522 30.9489837,2.23913043 31.7030488,2.23913043 C32.4894309,2.23913043 33.2865854,2.58695652 33.2865854,3.33695652 L33.2865854,6.66304348 Z M44.3605691,3.33695652 C44.3067073,1.05434783 42.7770325,0.141304348 40.8056911,0.141304348 L36.9815041,0.141304348 L36.9815041,9.86956522 L39.4268293,9.86956522 L39.4268293,6.77173913 L39.8577236,6.77173913 L42.0768293,9.85869565 L45.0930894,9.85869565 L42.4861789,6.52173913 C43.6495935,6.15217391 44.3605691,5.14130435 44.3605691,3.33695652 Z M40.8487805,4.65217391 L39.4268293,4.65217391 L39.4268293,2.43478261 L40.8487805,2.43478261 C42.3784553,2.43478261 42.3784553,4.65217391 40.8487805,4.65217391 Z" transform="translate(1 3)"></path></svg>') center/contain no-repeat !important;
	width: 55px !important;
	height: 19px !important;
	display: inline !important;
	position: absolute !important;
	top: unset !important;
	left: unset !important;
	bottom: unset !important;
	right: unset !important;
	opacity: 1 !important;
	padding: 0 !important;
	margin: 0 !important;
	visibility: visible !important;
	transform: unset !important;
	animation: unset !important;
}
html:only-child > head + body div.typeWindows__5fa63.titleBar__01af6 > div.wordmark__0d178::after {
	content: "" !important;
	background: rgb(125,125,125) !important;
	-webkit-mask: url('data:image/svg+xml; utf8, <svg width="242" height="19" version="1.1" xmlns="http://www.w3.org/2000/svg"><path stroke="none" fill="black" fill-rule="evenodd" transform="scale(0.6, 0.6) translate(5,4)" d="M58.488 0.690 C 54.786 0.948,52.503 3.334,52.961 6.466 C 53.321 8.926,55.135 10.509,58.186 11.025 C 60.205 11.366,61.177 12.097,60.818 13.004 C 60.260 14.412,57.255 14.154,55.679 12.564 L 55.440 12.323 55.340 12.411 C 55.125 12.602,52.767 14.824,52.768 14.836 C 52.768 14.843,52.842 14.938,52.932 15.047 C 55.188 17.761,58.434 18.568,61.663 17.218 C 63.879 16.291,65.049 14.673,65.056 12.523 C 65.066 9.499,63.520 7.999,59.581 7.209 C 57.730 6.838,56.956 6.245,57.139 5.336 C 57.409 3.990,59.424 3.729,61.092 4.823 C 61.328 4.978,61.513 5.126,61.754 5.350 L 61.902 5.489 63.269 4.436 C 64.021 3.857,64.640 3.372,64.645 3.357 C 64.668 3.286,63.905 2.499,63.488 2.164 C 62.141 1.082,60.367 0.559,58.488 0.690 M79.453 0.691 C 76.162 0.865,73.785 2.780,73.354 5.604 C 73.306 5.919,73.281 11.980,73.325 12.570 C 73.506 14.979,75.020 16.759,77.535 17.519 C 80.709 18.479,83.881 17.374,85.557 14.725 C 85.782 14.369,85.916 14.116,85.893 14.093 C 85.872 14.073,82.327 12.430,82.254 12.406 C 82.224 12.397,82.198 12.429,82.144 12.544 C 81.882 13.103,81.353 13.555,80.730 13.752 C 79.382 14.177,77.866 13.572,77.593 12.501 C 77.539 12.288,77.540 6.228,77.595 6.015 C 78.042 4.261,81.252 4.104,82.289 5.785 C 82.338 5.865,82.385 5.930,82.393 5.930 C 82.409 5.930,85.820 4.554,85.837 4.541 C 85.856 4.526,85.497 3.838,85.340 3.588 C 84.071 1.573,82.003 0.555,79.453 0.691 M122.233 0.698 C 118.928 0.954,116.621 2.860,116.252 5.640 C 116.198 6.046,116.207 12.646,116.263 13.000 C 116.678 15.665,118.768 17.446,121.919 17.818 C 124.720 18.149,127.505 16.687,128.743 14.235 L 128.815 14.092 128.669 14.026 C 128.589 13.989,127.762 13.608,126.832 13.177 C 125.902 12.747,125.135 12.395,125.129 12.395 C 125.122 12.395,125.079 12.471,125.032 12.564 C 124.149 14.321,121.136 14.341,120.519 12.593 L 120.453 12.407 120.447 9.350 C 120.442 6.713,120.445 6.267,120.476 6.106 C 120.814 4.288,124.035 4.054,125.172 5.764 C 125.233 5.855,125.288 5.930,125.294 5.930 C 125.318 5.930,128.710 4.554,128.727 4.537 C 128.750 4.515,128.506 4.030,128.302 3.691 C 127.042 1.592,124.822 0.498,122.233 0.698 M150.163 0.690 C 146.674 0.881,144.259 2.928,144.024 5.893 C 143.992 6.292,143.992 12.111,144.024 12.535 C 144.229 15.291,146.239 17.273,149.317 17.756 C 152.815 18.304,156.021 16.678,156.902 13.907 C 157.157 13.104,157.167 12.980,157.179 10.250 L 157.190 7.907 153.816 7.907 L 150.442 7.907 150.442 9.686 L 150.442 11.465 151.770 11.465 L 153.098 11.465 153.088 11.948 C 153.069 12.840,152.771 13.335,152.028 13.707 C 150.559 14.443,148.672 13.843,148.297 12.522 L 148.244 12.337 148.244 9.221 L 148.244 6.105 148.296 5.922 C 148.641 4.708,150.215 4.096,151.595 4.640 C 152.111 4.844,152.607 5.305,152.816 5.777 C 152.852 5.859,152.875 5.885,152.903 5.877 C 152.970 5.857,156.383 4.277,156.404 4.256 C 156.456 4.205,156.028 3.438,155.709 3.012 C 154.517 1.418,152.475 0.563,150.163 0.690 M180.081 0.700 C 176.707 0.925,174.383 2.695,173.857 5.442 C 173.796 5.758,173.758 12.153,173.814 12.721 C 174.112 15.773,176.906 17.847,180.721 17.847 C 184.496 17.847,187.238 15.831,187.594 12.794 C 187.645 12.357,187.645 6.177,187.593 5.740 C 187.221 2.553,184.063 0.434,180.081 0.700 M390.026 0.701 C 386.623 0.917,384.214 2.823,383.799 5.628 C 383.750 5.958,383.722 11.716,383.765 12.444 C 383.954 15.593,386.593 17.735,390.430 17.853 C 394.202 17.969,397.090 15.976,397.551 12.938 C 397.616 12.508,397.615 6.017,397.550 5.593 C 397.065 2.452,393.986 0.450,390.026 0.701 M249.326 4.333 C 249.326 7.601,249.328 7.786,249.366 7.797 C 249.389 7.803,250.338 8.626,251.477 9.625 C 252.615 10.624,253.554 11.442,253.564 11.442 C 253.574 11.442,253.581 9.871,253.581 7.952 L 253.581 4.462 254.948 4.471 C 256.262 4.479,256.321 4.481,256.495 4.530 C 257.918 4.924,257.953 6.870,256.547 7.343 L 256.360 7.405 255.366 7.414 L 254.372 7.422 254.372 8.954 L 254.372 10.486 255.413 10.494 C 256.589 10.503,256.592 10.504,257.000 10.704 C 258.198 11.291,258.196 13.081,256.998 13.659 C 256.517 13.891,256.654 13.884,252.716 13.884 L 249.326 13.884 249.326 15.744 L 249.326 17.605 252.831 17.604 C 256.414 17.604,256.877 17.595,257.522 17.512 C 260.168 17.172,261.703 15.747,262.103 13.259 C 262.394 11.447,261.566 9.707,259.993 8.829 C 259.761 8.699,259.762 8.700,259.877 8.639 C 260.813 8.141,261.456 6.960,261.452 5.744 C 261.445 3.299,259.914 1.508,257.419 1.024 C 256.765 0.897,256.875 0.901,252.959 0.890 L 249.326 0.881 249.326 4.333 M317.842 0.913 C 317.848 0.929,319.202 4.691,320.851 9.273 L 323.849 17.604 325.791 17.604 L 327.733 17.605 330.739 9.259 C 332.392 4.669,333.744 0.907,333.744 0.899 C 333.744 0.891,332.721 0.884,331.471 0.884 L 329.198 0.884 327.877 4.983 L 326.556 9.081 326.185 11.012 C 325.982 12.073,325.815 12.955,325.814 12.971 C 325.814 12.987,325.801 13.000,325.785 13.000 C 325.765 13.000,325.639 12.389,325.380 11.025 L 325.004 9.049 323.695 4.966 L 322.385 0.884 320.109 0.884 C 318.298 0.884,317.834 0.890,317.842 0.913 M354.349 4.333 C 354.349 7.601,354.351 7.786,354.390 7.797 C 354.412 7.803,355.362 8.626,356.500 9.625 C 357.638 10.624,358.578 11.442,358.587 11.442 C 358.597 11.442,358.605 9.871,358.605 7.952 L 358.605 4.462 359.971 4.471 C 361.286 4.479,361.344 4.481,361.519 4.530 C 362.941 4.924,362.976 6.870,361.570 7.343 L 361.384 7.405 360.390 7.414 L 359.395 7.422 359.395 8.954 L 359.395 10.486 360.436 10.494 C 361.613 10.503,361.615 10.504,362.023 10.704 C 363.221 11.291,363.220 13.081,362.021 13.659 C 361.541 13.891,361.678 13.884,357.739 13.884 L 354.349 13.884 354.349 15.744 L 354.349 17.605 357.855 17.604 C 361.438 17.604,361.900 17.595,362.546 17.512 C 365.191 17.172,366.726 15.747,367.126 13.259 C 367.418 11.447,366.589 9.707,365.017 8.829 C 364.784 8.699,364.785 8.700,364.900 8.639 C 365.836 8.141,366.479 6.960,366.475 5.744 C 366.468 3.299,364.938 1.508,362.442 1.024 C 361.788 0.897,361.898 0.901,357.983 0.890 L 354.349 0.881 354.349 4.333 M24.186 4.356 C 24.186 7.624,24.188 7.809,24.227 7.820 C 24.249 7.827,25.199 8.649,26.337 9.648 C 27.476 10.647,28.415 11.465,28.424 11.465 C 28.434 11.465,28.442 9.895,28.442 7.975 L 28.442 4.485 29.808 4.494 C 31.123 4.502,31.181 4.505,31.356 4.553 C 32.778 4.947,32.813 6.893,31.407 7.366 L 31.221 7.429 30.227 7.437 L 29.233 7.445 29.233 8.977 L 29.233 10.509 30.273 10.517 C 31.450 10.527,31.452 10.527,31.860 10.727 C 33.058 11.314,33.057 13.104,31.858 13.682 C 31.378 13.914,31.515 13.907,27.576 13.907 L 24.186 13.907 24.186 15.767 L 24.186 17.628 27.692 17.627 C 31.275 17.627,31.737 17.618,32.383 17.535 C 35.028 17.195,36.564 15.770,36.964 13.282 C 37.255 11.471,36.426 9.731,34.854 8.852 C 34.621 8.722,34.622 8.724,34.738 8.662 C 35.674 8.165,36.316 6.984,36.312 5.767 C 36.305 3.322,34.775 1.531,32.279 1.047 C 31.625 0.921,31.735 0.924,27.820 0.914 L 24.186 0.904 24.186 4.356 M42.922 0.925 C 42.916 0.934,41.608 4.678,40.015 9.244 C 38.423 13.811,37.113 17.565,37.104 17.587 C 37.089 17.626,37.206 17.628,39.368 17.628 C 41.519 17.628,41.649 17.626,41.660 17.587 C 41.667 17.565,41.898 16.817,42.173 15.925 C 42.449 15.034,42.674 14.298,42.674 14.292 C 42.674 14.285,43.673 14.279,44.894 14.279 L 47.114 14.279 47.346 14.994 C 47.474 15.388,47.718 16.141,47.888 16.669 L 48.198 17.628 50.473 17.628 C 52.284 17.628,52.747 17.622,52.739 17.599 C 52.734 17.583,51.390 13.821,49.754 9.238 L 46.779 0.907 44.856 0.907 C 43.798 0.907,42.928 0.915,42.922 0.925 M66.860 9.267 L 66.860 17.628 68.977 17.628 L 71.093 17.628 71.093 9.267 L 71.093 0.907 68.977 0.907 L 66.860 0.907 66.860 9.267 M103.247 9.239 C 101.649 13.821,100.337 17.583,100.331 17.599 C 100.323 17.622,100.786 17.628,102.598 17.628 L 104.875 17.628 105.348 16.099 C 105.609 15.258,105.841 14.504,105.865 14.424 L 105.909 14.279 108.128 14.279 L 110.346 14.279 110.448 14.599 C 110.504 14.775,110.747 15.528,110.989 16.273 L 111.427 17.628 113.704 17.628 C 115.516 17.628,115.980 17.622,115.971 17.599 C 115.965 17.583,114.622 13.821,112.986 9.239 L 110.012 0.908 108.081 0.908 L 106.151 0.908 103.247 9.239 M130.326 9.267 L 130.326 17.628 132.453 17.628 L 134.581 17.628 134.581 14.740 L 134.581 11.851 134.644 11.761 C 134.696 11.686,134.711 11.676,134.731 11.705 C 134.745 11.723,135.703 13.064,136.860 14.683 L 138.965 17.627 141.648 17.627 C 144.025 17.628,144.329 17.624,144.317 17.593 C 144.308 17.568,137.994 9.268,137.789 9.011 C 137.778 8.996,139.071 7.397,141.060 4.969 C 142.869 2.759,144.349 0.941,144.349 0.929 C 144.349 0.915,143.342 0.907,141.715 0.908 L 139.081 0.909 136.837 3.975 L 134.593 7.041 134.587 3.974 L 134.581 0.907 132.453 0.907 L 130.326 0.907 130.326 9.267 M159.116 9.266 L 159.116 17.628 161.256 17.628 L 163.395 17.628 163.395 14.977 L 163.395 12.326 163.762 12.326 L 164.129 12.326 166.058 14.976 L 167.988 17.626 170.625 17.627 C 172.875 17.628,173.259 17.623,173.248 17.595 C 173.241 17.577,172.224 16.288,170.987 14.730 C 169.750 13.172,168.747 11.894,168.759 11.890 C 170.569 11.276,171.641 9.837,171.917 7.651 C 172.346 4.246,170.890 1.873,167.930 1.154 C 166.981 0.924,166.973 0.924,162.785 0.913 L 159.116 0.904 159.116 9.266 M189.767 6.704 C 189.767 12.984,189.763 12.742,189.893 13.354 C 190.564 16.526,194.059 18.450,197.907 17.766 C 200.535 17.299,202.429 15.647,202.943 13.372 C 203.088 12.729,203.079 13.167,203.087 6.750 L 203.094 0.907 200.955 0.907 L 198.815 0.907 198.808 6.599 C 198.801 11.986,198.798 12.299,198.759 12.453 C 198.236 14.492,194.735 14.570,194.112 12.558 L 194.058 12.384 194.052 6.645 L 194.046 0.907 191.907 0.907 L 189.767 0.907 189.767 6.704 M205.558 9.267 L 205.558 17.628 207.674 17.628 L 209.791 17.628 209.790 14.238 L 209.790 10.849 209.526 9.285 C 209.175 7.205,209.135 7.199,210.080 9.366 L 210.797 11.012 212.694 14.320 L 214.591 17.628 216.726 17.628 L 218.860 17.628 218.860 9.267 L 218.860 0.907 216.756 0.907 L 214.651 0.907 214.651 4.682 C 214.651 7.186,214.659 8.500,214.675 8.587 C 214.747 8.973,215.111 11.338,215.102 11.354 C 215.060 11.421,214.969 11.226,214.320 9.692 L 213.610 8.012 211.600 4.465 L 209.590 0.919 207.574 0.913 L 205.558 0.907 205.558 9.267 M221.488 4.334 C 221.488 7.579,221.491 7.763,221.529 7.774 C 221.551 7.780,222.501 8.603,223.640 9.602 C 224.778 10.601,225.717 11.418,225.727 11.418 C 225.736 11.419,225.744 9.948,225.744 8.150 L 225.744 4.881 227.087 4.889 L 228.430 4.897 228.663 4.960 C 229.357 5.146,229.767 5.539,229.922 6.163 C 229.963 6.328,229.965 6.490,229.965 9.244 L 229.965 12.151 229.913 12.349 C 229.704 13.139,229.110 13.560,228.105 13.628 C 227.923 13.641,226.390 13.651,224.634 13.651 L 221.488 13.651 221.488 15.640 L 221.488 17.628 224.738 17.628 C 228.530 17.628,228.747 17.619,229.628 17.442 C 232.189 16.927,233.789 15.382,234.170 13.058 C 234.229 12.694,234.263 6.624,234.209 5.965 C 233.966 2.989,231.727 1.114,228.198 0.930 C 227.951 0.918,226.369 0.907,224.622 0.907 L 221.488 0.907 221.488 4.334 M261.518 0.936 C 261.525 0.952,262.834 3.230,264.428 5.997 L 267.326 11.030 267.326 14.329 L 267.326 17.628 269.453 17.628 L 271.581 17.628 271.581 14.331 L 271.581 11.034 274.491 6.000 C 276.091 3.232,277.406 0.953,277.412 0.937 C 277.421 0.913,276.956 0.907,274.937 0.907 L 272.450 0.907 270.952 3.953 C 270.128 5.629,269.448 7.000,269.442 6.999 C 269.435 6.999,268.756 5.628,267.932 3.953 L 266.435 0.907 263.971 0.907 C 262.009 0.907,261.509 0.913,261.518 0.936 M290.535 4.334 C 290.535 7.579,290.537 7.763,290.576 7.774 C 290.598 7.780,291.548 8.603,292.686 9.602 C 293.824 10.601,294.764 11.418,294.773 11.418 C 294.783 11.419,294.791 9.948,294.791 8.150 L 294.791 4.881 296.134 4.889 L 297.477 4.897 297.709 4.960 C 298.403 5.146,298.814 5.539,298.968 6.163 C 299.009 6.328,299.012 6.490,299.012 9.244 L 299.012 12.151 298.959 12.349 C 298.751 13.139,298.157 13.560,297.151 13.628 C 296.970 13.641,295.436 13.651,293.680 13.651 L 290.535 13.651 290.535 15.640 L 290.535 17.628 293.785 17.628 C 297.577 17.628,297.794 17.619,298.674 17.442 C 301.235 16.927,302.836 15.382,303.216 13.058 C 303.276 12.694,303.310 6.624,303.256 5.965 C 303.013 2.989,300.774 1.114,297.244 0.930 C 296.998 0.918,295.416 0.907,293.669 0.907 L 290.535 0.907 290.535 4.334 M305.512 9.267 L 305.512 17.628 311.337 17.628 L 317.163 17.628 317.163 15.616 L 317.163 13.605 313.488 13.605 L 309.814 13.605 309.814 12.372 L 309.814 11.140 313.186 11.140 L 316.558 11.140 316.558 9.302 L 316.558 7.465 313.186 7.465 L 309.814 7.465 309.814 6.186 L 309.814 4.907 313.488 4.907 L 317.163 4.907 317.163 2.907 L 317.163 0.907 311.337 0.907 L 305.512 0.907 305.512 9.267 M334.814 9.267 L 334.814 17.628 336.942 17.628 L 339.070 17.628 339.070 9.267 L 339.070 0.907 336.942 0.907 L 334.814 0.907 334.814 9.267 M341.674 9.267 L 341.674 17.628 347.198 17.628 L 352.721 17.628 352.721 15.523 L 352.721 13.419 349.326 13.419 L 345.930 13.419 345.930 7.163 L 345.930 0.907 343.802 0.907 L 341.674 0.907 341.674 9.267 M369.070 9.267 L 369.070 17.628 371.221 17.628 L 373.372 17.628 373.372 14.977 L 373.372 12.326 373.738 12.327 L 374.105 12.328 376.034 14.978 L 377.963 17.628 380.598 17.628 C 382.047 17.628,383.232 17.620,383.232 17.610 C 383.232 17.601,382.367 16.505,381.311 15.174 C 380.254 13.844,379.235 12.561,379.047 12.324 L 378.704 11.891 378.916 11.815 C 380.927 11.094,382.015 9.124,381.947 6.327 C 381.871 3.234,380.093 1.352,376.892 0.978 C 376.397 0.920,375.607 0.908,372.424 0.907 L 369.070 0.907 369.070 9.267 M87.395 4.380 C 87.395 7.647,87.398 7.832,87.436 7.843 C 87.458 7.850,88.408 8.672,89.547 9.672 C 90.685 10.671,91.624 11.488,91.634 11.488 C 91.643 11.488,91.651 9.918,91.651 7.998 L 91.651 4.508 93.017 4.517 C 94.332 4.526,94.391 4.528,94.565 4.576 C 95.987 4.971,96.023 6.916,94.616 7.389 L 94.430 7.452 93.436 7.460 L 92.442 7.468 92.442 9.000 L 92.442 10.532 93.483 10.541 C 94.659 10.550,94.662 10.550,95.070 10.750 C 96.268 11.337,96.266 13.127,95.067 13.706 C 94.587 13.937,94.724 13.930,90.785 13.930 L 87.395 13.930 87.395 15.791 L 87.395 17.651 90.901 17.651 C 94.484 17.650,94.947 17.641,95.592 17.558 C 98.238 17.219,99.773 15.793,100.173 13.306 C 100.464 11.494,99.636 9.754,98.063 8.875 C 97.831 8.745,97.832 8.747,97.947 8.686 C 98.883 8.188,99.526 7.007,99.522 5.791 C 99.514 3.345,97.984 1.554,95.488 1.071 C 94.834 0.944,94.944 0.947,91.029 0.937 L 87.395 0.927 87.395 4.380 M181.387 4.605 C 182.483 4.791,183.204 5.337,183.359 6.098 C 183.414 6.371,183.414 12.174,183.358 12.426 C 182.924 14.391,178.570 14.432,178.069 12.475 C 178.004 12.220,177.997 6.370,178.061 6.086 C 178.311 4.984,179.776 4.331,181.387 4.605 M391.352 4.603 C 392.415 4.786,393.110 5.288,393.318 6.023 C 393.384 6.258,393.384 12.254,393.318 12.488 C 392.775 14.411,388.490 14.392,388.036 12.464 C 387.983 12.238,387.982 6.267,388.035 6.057 C 388.309 4.975,389.775 4.332,391.352 4.603 M166.461 4.949 C 168.323 5.517,168.296 8.092,166.423 8.599 L 166.198 8.660 164.797 8.669 L 163.395 8.678 163.395 6.780 L 163.395 4.881 164.843 4.889 C 166.263 4.897,166.294 4.898,166.461 4.949 M376.423 4.947 C 378.081 5.414,378.313 7.706,376.779 8.453 C 376.357 8.659,376.206 8.674,374.634 8.674 L 373.372 8.674 373.372 6.778 L 373.372 4.882 374.808 4.889 C 376.199 4.896,376.250 4.898,376.423 4.947 M44.953 5.669 C 44.953 5.679,45.210 6.770,45.523 8.093 C 45.837 9.416,46.093 10.501,46.093 10.505 C 46.093 10.509,45.538 10.512,44.859 10.512 C 43.881 10.512,43.626 10.506,43.635 10.483 C 43.641 10.467,43.916 9.373,44.247 8.052 C 44.823 5.756,44.851 5.651,44.901 5.651 C 44.930 5.651,44.953 5.659,44.953 5.669 M108.742 8.052 C 109.054 9.373,109.314 10.467,109.320 10.483 C 109.328 10.506,109.073 10.512,108.093 10.512 C 107.113 10.512,106.858 10.506,106.865 10.483 C 106.871 10.467,107.147 9.373,107.478 8.052 C 108.029 5.862,108.085 5.651,108.128 5.651 C 108.171 5.651,108.222 5.849,108.742 8.052 M5.419 9.453 L 5.419 11.465 9.105 11.465 L 12.791 11.465 12.791 9.453 L 12.791 7.442 9.105 7.442 L 5.419 7.442 5.419 9.453"></path></svg>') center/contain no-repeat !important;
	width: 242px !important;
	height: 19px !important;
	display: inline !important;
	position: absolute !important;
	top: unset !important;
	left: 64px !important;
	bottom: unset !important;
	right: unset !important;
	opacity: 0.1 !important;
	padding: 0 !important;
	margin: 0 !important;
	visibility: visible !important;
	transform: unset !important;
	animation: unset !important;
	transition: opacity .15s ease !important;
}
html:only-child > head + body div.typeWindows__5fa63.titleBar__01af6:hover > div.wordmark__0d178::after {
	opacity: 1 !important;
}

html:only-child > head + body div.app_b1f720 > div.app_de4237 > div.layers__1c917.layers_a23c37 > div.layer__2efaa.baseLayer__8fda3 + div.layer__2efaa > div.standardSidebarView__1129a::after {
	content: url('data:image/svg+xml; utf8, <svg width="400" height="18" version="1.1" xmlns="http://www.w3.org/2000/svg"><path stroke="none" fill="rgb(255, 255, 255)" fill-rule="evenodd" d="M58.488 0.690 C 54.786 0.948,52.503 3.334,52.961 6.466 C 53.321 8.926,55.135 10.509,58.186 11.025 C 60.205 11.366,61.177 12.097,60.818 13.004 C 60.260 14.412,57.255 14.154,55.679 12.564 L 55.440 12.323 55.340 12.411 C 55.125 12.602,52.767 14.824,52.768 14.836 C 52.768 14.843,52.842 14.938,52.932 15.047 C 55.188 17.761,58.434 18.568,61.663 17.218 C 63.879 16.291,65.049 14.673,65.056 12.523 C 65.066 9.499,63.520 7.999,59.581 7.209 C 57.730 6.838,56.956 6.245,57.139 5.336 C 57.409 3.990,59.424 3.729,61.092 4.823 C 61.328 4.978,61.513 5.126,61.754 5.350 L 61.902 5.489 63.269 4.436 C 64.021 3.857,64.640 3.372,64.645 3.357 C 64.668 3.286,63.905 2.499,63.488 2.164 C 62.141 1.082,60.367 0.559,58.488 0.690 M79.453 0.691 C 76.162 0.865,73.785 2.780,73.354 5.604 C 73.306 5.919,73.281 11.980,73.325 12.570 C 73.506 14.979,75.020 16.759,77.535 17.519 C 80.709 18.479,83.881 17.374,85.557 14.725 C 85.782 14.369,85.916 14.116,85.893 14.093 C 85.872 14.073,82.327 12.430,82.254 12.406 C 82.224 12.397,82.198 12.429,82.144 12.544 C 81.882 13.103,81.353 13.555,80.730 13.752 C 79.382 14.177,77.866 13.572,77.593 12.501 C 77.539 12.288,77.540 6.228,77.595 6.015 C 78.042 4.261,81.252 4.104,82.289 5.785 C 82.338 5.865,82.385 5.930,82.393 5.930 C 82.409 5.930,85.820 4.554,85.837 4.541 C 85.856 4.526,85.497 3.838,85.340 3.588 C 84.071 1.573,82.003 0.555,79.453 0.691 M122.233 0.698 C 118.928 0.954,116.621 2.860,116.252 5.640 C 116.198 6.046,116.207 12.646,116.263 13.000 C 116.678 15.665,118.768 17.446,121.919 17.818 C 124.720 18.149,127.505 16.687,128.743 14.235 L 128.815 14.092 128.669 14.026 C 128.589 13.989,127.762 13.608,126.832 13.177 C 125.902 12.747,125.135 12.395,125.129 12.395 C 125.122 12.395,125.079 12.471,125.032 12.564 C 124.149 14.321,121.136 14.341,120.519 12.593 L 120.453 12.407 120.447 9.350 C 120.442 6.713,120.445 6.267,120.476 6.106 C 120.814 4.288,124.035 4.054,125.172 5.764 C 125.233 5.855,125.288 5.930,125.294 5.930 C 125.318 5.930,128.710 4.554,128.727 4.537 C 128.750 4.515,128.506 4.030,128.302 3.691 C 127.042 1.592,124.822 0.498,122.233 0.698 M150.163 0.690 C 146.674 0.881,144.259 2.928,144.024 5.893 C 143.992 6.292,143.992 12.111,144.024 12.535 C 144.229 15.291,146.239 17.273,149.317 17.756 C 152.815 18.304,156.021 16.678,156.902 13.907 C 157.157 13.104,157.167 12.980,157.179 10.250 L 157.190 7.907 153.816 7.907 L 150.442 7.907 150.442 9.686 L 150.442 11.465 151.770 11.465 L 153.098 11.465 153.088 11.948 C 153.069 12.840,152.771 13.335,152.028 13.707 C 150.559 14.443,148.672 13.843,148.297 12.522 L 148.244 12.337 148.244 9.221 L 148.244 6.105 148.296 5.922 C 148.641 4.708,150.215 4.096,151.595 4.640 C 152.111 4.844,152.607 5.305,152.816 5.777 C 152.852 5.859,152.875 5.885,152.903 5.877 C 152.970 5.857,156.383 4.277,156.404 4.256 C 156.456 4.205,156.028 3.438,155.709 3.012 C 154.517 1.418,152.475 0.563,150.163 0.690 M180.081 0.700 C 176.707 0.925,174.383 2.695,173.857 5.442 C 173.796 5.758,173.758 12.153,173.814 12.721 C 174.112 15.773,176.906 17.847,180.721 17.847 C 184.496 17.847,187.238 15.831,187.594 12.794 C 187.645 12.357,187.645 6.177,187.593 5.740 C 187.221 2.553,184.063 0.434,180.081 0.700 M390.026 0.701 C 386.623 0.917,384.214 2.823,383.799 5.628 C 383.750 5.958,383.722 11.716,383.765 12.444 C 383.954 15.593,386.593 17.735,390.430 17.853 C 394.202 17.969,397.090 15.976,397.551 12.938 C 397.616 12.508,397.615 6.017,397.550 5.593 C 397.065 2.452,393.986 0.450,390.026 0.701 M249.326 4.333 C 249.326 7.601,249.328 7.786,249.366 7.797 C 249.389 7.803,250.338 8.626,251.477 9.625 C 252.615 10.624,253.554 11.442,253.564 11.442 C 253.574 11.442,253.581 9.871,253.581 7.952 L 253.581 4.462 254.948 4.471 C 256.262 4.479,256.321 4.481,256.495 4.530 C 257.918 4.924,257.953 6.870,256.547 7.343 L 256.360 7.405 255.366 7.414 L 254.372 7.422 254.372 8.954 L 254.372 10.486 255.413 10.494 C 256.589 10.503,256.592 10.504,257.000 10.704 C 258.198 11.291,258.196 13.081,256.998 13.659 C 256.517 13.891,256.654 13.884,252.716 13.884 L 249.326 13.884 249.326 15.744 L 249.326 17.605 252.831 17.604 C 256.414 17.604,256.877 17.595,257.522 17.512 C 260.168 17.172,261.703 15.747,262.103 13.259 C 262.394 11.447,261.566 9.707,259.993 8.829 C 259.761 8.699,259.762 8.700,259.877 8.639 C 260.813 8.141,261.456 6.960,261.452 5.744 C 261.445 3.299,259.914 1.508,257.419 1.024 C 256.765 0.897,256.875 0.901,252.959 0.890 L 249.326 0.881 249.326 4.333 M317.842 0.913 C 317.848 0.929,319.202 4.691,320.851 9.273 L 323.849 17.604 325.791 17.604 L 327.733 17.605 330.739 9.259 C 332.392 4.669,333.744 0.907,333.744 0.899 C 333.744 0.891,332.721 0.884,331.471 0.884 L 329.198 0.884 327.877 4.983 L 326.556 9.081 326.185 11.012 C 325.982 12.073,325.815 12.955,325.814 12.971 C 325.814 12.987,325.801 13.000,325.785 13.000 C 325.765 13.000,325.639 12.389,325.380 11.025 L 325.004 9.049 323.695 4.966 L 322.385 0.884 320.109 0.884 C 318.298 0.884,317.834 0.890,317.842 0.913 M354.349 4.333 C 354.349 7.601,354.351 7.786,354.390 7.797 C 354.412 7.803,355.362 8.626,356.500 9.625 C 357.638 10.624,358.578 11.442,358.587 11.442 C 358.597 11.442,358.605 9.871,358.605 7.952 L 358.605 4.462 359.971 4.471 C 361.286 4.479,361.344 4.481,361.519 4.530 C 362.941 4.924,362.976 6.870,361.570 7.343 L 361.384 7.405 360.390 7.414 L 359.395 7.422 359.395 8.954 L 359.395 10.486 360.436 10.494 C 361.613 10.503,361.615 10.504,362.023 10.704 C 363.221 11.291,363.220 13.081,362.021 13.659 C 361.541 13.891,361.678 13.884,357.739 13.884 L 354.349 13.884 354.349 15.744 L 354.349 17.605 357.855 17.604 C 361.438 17.604,361.900 17.595,362.546 17.512 C 365.191 17.172,366.726 15.747,367.126 13.259 C 367.418 11.447,366.589 9.707,365.017 8.829 C 364.784 8.699,364.785 8.700,364.900 8.639 C 365.836 8.141,366.479 6.960,366.475 5.744 C 366.468 3.299,364.938 1.508,362.442 1.024 C 361.788 0.897,361.898 0.901,357.983 0.890 L 354.349 0.881 354.349 4.333 M24.186 4.356 C 24.186 7.624,24.188 7.809,24.227 7.820 C 24.249 7.827,25.199 8.649,26.337 9.648 C 27.476 10.647,28.415 11.465,28.424 11.465 C 28.434 11.465,28.442 9.895,28.442 7.975 L 28.442 4.485 29.808 4.494 C 31.123 4.502,31.181 4.505,31.356 4.553 C 32.778 4.947,32.813 6.893,31.407 7.366 L 31.221 7.429 30.227 7.437 L 29.233 7.445 29.233 8.977 L 29.233 10.509 30.273 10.517 C 31.450 10.527,31.452 10.527,31.860 10.727 C 33.058 11.314,33.057 13.104,31.858 13.682 C 31.378 13.914,31.515 13.907,27.576 13.907 L 24.186 13.907 24.186 15.767 L 24.186 17.628 27.692 17.627 C 31.275 17.627,31.737 17.618,32.383 17.535 C 35.028 17.195,36.564 15.770,36.964 13.282 C 37.255 11.471,36.426 9.731,34.854 8.852 C 34.621 8.722,34.622 8.724,34.738 8.662 C 35.674 8.165,36.316 6.984,36.312 5.767 C 36.305 3.322,34.775 1.531,32.279 1.047 C 31.625 0.921,31.735 0.924,27.820 0.914 L 24.186 0.904 24.186 4.356 M42.922 0.925 C 42.916 0.934,41.608 4.678,40.015 9.244 C 38.423 13.811,37.113 17.565,37.104 17.587 C 37.089 17.626,37.206 17.628,39.368 17.628 C 41.519 17.628,41.649 17.626,41.660 17.587 C 41.667 17.565,41.898 16.817,42.173 15.925 C 42.449 15.034,42.674 14.298,42.674 14.292 C 42.674 14.285,43.673 14.279,44.894 14.279 L 47.114 14.279 47.346 14.994 C 47.474 15.388,47.718 16.141,47.888 16.669 L 48.198 17.628 50.473 17.628 C 52.284 17.628,52.747 17.622,52.739 17.599 C 52.734 17.583,51.390 13.821,49.754 9.238 L 46.779 0.907 44.856 0.907 C 43.798 0.907,42.928 0.915,42.922 0.925 M66.860 9.267 L 66.860 17.628 68.977 17.628 L 71.093 17.628 71.093 9.267 L 71.093 0.907 68.977 0.907 L 66.860 0.907 66.860 9.267 M103.247 9.239 C 101.649 13.821,100.337 17.583,100.331 17.599 C 100.323 17.622,100.786 17.628,102.598 17.628 L 104.875 17.628 105.348 16.099 C 105.609 15.258,105.841 14.504,105.865 14.424 L 105.909 14.279 108.128 14.279 L 110.346 14.279 110.448 14.599 C 110.504 14.775,110.747 15.528,110.989 16.273 L 111.427 17.628 113.704 17.628 C 115.516 17.628,115.980 17.622,115.971 17.599 C 115.965 17.583,114.622 13.821,112.986 9.239 L 110.012 0.908 108.081 0.908 L 106.151 0.908 103.247 9.239 M130.326 9.267 L 130.326 17.628 132.453 17.628 L 134.581 17.628 134.581 14.740 L 134.581 11.851 134.644 11.761 C 134.696 11.686,134.711 11.676,134.731 11.705 C 134.745 11.723,135.703 13.064,136.860 14.683 L 138.965 17.627 141.648 17.627 C 144.025 17.628,144.329 17.624,144.317 17.593 C 144.308 17.568,137.994 9.268,137.789 9.011 C 137.778 8.996,139.071 7.397,141.060 4.969 C 142.869 2.759,144.349 0.941,144.349 0.929 C 144.349 0.915,143.342 0.907,141.715 0.908 L 139.081 0.909 136.837 3.975 L 134.593 7.041 134.587 3.974 L 134.581 0.907 132.453 0.907 L 130.326 0.907 130.326 9.267 M159.116 9.266 L 159.116 17.628 161.256 17.628 L 163.395 17.628 163.395 14.977 L 163.395 12.326 163.762 12.326 L 164.129 12.326 166.058 14.976 L 167.988 17.626 170.625 17.627 C 172.875 17.628,173.259 17.623,173.248 17.595 C 173.241 17.577,172.224 16.288,170.987 14.730 C 169.750 13.172,168.747 11.894,168.759 11.890 C 170.569 11.276,171.641 9.837,171.917 7.651 C 172.346 4.246,170.890 1.873,167.930 1.154 C 166.981 0.924,166.973 0.924,162.785 0.913 L 159.116 0.904 159.116 9.266 M189.767 6.704 C 189.767 12.984,189.763 12.742,189.893 13.354 C 190.564 16.526,194.059 18.450,197.907 17.766 C 200.535 17.299,202.429 15.647,202.943 13.372 C 203.088 12.729,203.079 13.167,203.087 6.750 L 203.094 0.907 200.955 0.907 L 198.815 0.907 198.808 6.599 C 198.801 11.986,198.798 12.299,198.759 12.453 C 198.236 14.492,194.735 14.570,194.112 12.558 L 194.058 12.384 194.052 6.645 L 194.046 0.907 191.907 0.907 L 189.767 0.907 189.767 6.704 M205.558 9.267 L 205.558 17.628 207.674 17.628 L 209.791 17.628 209.790 14.238 L 209.790 10.849 209.526 9.285 C 209.175 7.205,209.135 7.199,210.080 9.366 L 210.797 11.012 212.694 14.320 L 214.591 17.628 216.726 17.628 L 218.860 17.628 218.860 9.267 L 218.860 0.907 216.756 0.907 L 214.651 0.907 214.651 4.682 C 214.651 7.186,214.659 8.500,214.675 8.587 C 214.747 8.973,215.111 11.338,215.102 11.354 C 215.060 11.421,214.969 11.226,214.320 9.692 L 213.610 8.012 211.600 4.465 L 209.590 0.919 207.574 0.913 L 205.558 0.907 205.558 9.267 M221.488 4.334 C 221.488 7.579,221.491 7.763,221.529 7.774 C 221.551 7.780,222.501 8.603,223.640 9.602 C 224.778 10.601,225.717 11.418,225.727 11.418 C 225.736 11.419,225.744 9.948,225.744 8.150 L 225.744 4.881 227.087 4.889 L 228.430 4.897 228.663 4.960 C 229.357 5.146,229.767 5.539,229.922 6.163 C 229.963 6.328,229.965 6.490,229.965 9.244 L 229.965 12.151 229.913 12.349 C 229.704 13.139,229.110 13.560,228.105 13.628 C 227.923 13.641,226.390 13.651,224.634 13.651 L 221.488 13.651 221.488 15.640 L 221.488 17.628 224.738 17.628 C 228.530 17.628,228.747 17.619,229.628 17.442 C 232.189 16.927,233.789 15.382,234.170 13.058 C 234.229 12.694,234.263 6.624,234.209 5.965 C 233.966 2.989,231.727 1.114,228.198 0.930 C 227.951 0.918,226.369 0.907,224.622 0.907 L 221.488 0.907 221.488 4.334 M261.518 0.936 C 261.525 0.952,262.834 3.230,264.428 5.997 L 267.326 11.030 267.326 14.329 L 267.326 17.628 269.453 17.628 L 271.581 17.628 271.581 14.331 L 271.581 11.034 274.491 6.000 C 276.091 3.232,277.406 0.953,277.412 0.937 C 277.421 0.913,276.956 0.907,274.937 0.907 L 272.450 0.907 270.952 3.953 C 270.128 5.629,269.448 7.000,269.442 6.999 C 269.435 6.999,268.756 5.628,267.932 3.953 L 266.435 0.907 263.971 0.907 C 262.009 0.907,261.509 0.913,261.518 0.936 M290.535 4.334 C 290.535 7.579,290.537 7.763,290.576 7.774 C 290.598 7.780,291.548 8.603,292.686 9.602 C 293.824 10.601,294.764 11.418,294.773 11.418 C 294.783 11.419,294.791 9.948,294.791 8.150 L 294.791 4.881 296.134 4.889 L 297.477 4.897 297.709 4.960 C 298.403 5.146,298.814 5.539,298.968 6.163 C 299.009 6.328,299.012 6.490,299.012 9.244 L 299.012 12.151 298.959 12.349 C 298.751 13.139,298.157 13.560,297.151 13.628 C 296.970 13.641,295.436 13.651,293.680 13.651 L 290.535 13.651 290.535 15.640 L 290.535 17.628 293.785 17.628 C 297.577 17.628,297.794 17.619,298.674 17.442 C 301.235 16.927,302.836 15.382,303.216 13.058 C 303.276 12.694,303.310 6.624,303.256 5.965 C 303.013 2.989,300.774 1.114,297.244 0.930 C 296.998 0.918,295.416 0.907,293.669 0.907 L 290.535 0.907 290.535 4.334 M305.512 9.267 L 305.512 17.628 311.337 17.628 L 317.163 17.628 317.163 15.616 L 317.163 13.605 313.488 13.605 L 309.814 13.605 309.814 12.372 L 309.814 11.140 313.186 11.140 L 316.558 11.140 316.558 9.302 L 316.558 7.465 313.186 7.465 L 309.814 7.465 309.814 6.186 L 309.814 4.907 313.488 4.907 L 317.163 4.907 317.163 2.907 L 317.163 0.907 311.337 0.907 L 305.512 0.907 305.512 9.267 M334.814 9.267 L 334.814 17.628 336.942 17.628 L 339.070 17.628 339.070 9.267 L 339.070 0.907 336.942 0.907 L 334.814 0.907 334.814 9.267 M341.674 9.267 L 341.674 17.628 347.198 17.628 L 352.721 17.628 352.721 15.523 L 352.721 13.419 349.326 13.419 L 345.930 13.419 345.930 7.163 L 345.930 0.907 343.802 0.907 L 341.674 0.907 341.674 9.267 M369.070 9.267 L 369.070 17.628 371.221 17.628 L 373.372 17.628 373.372 14.977 L 373.372 12.326 373.738 12.327 L 374.105 12.328 376.034 14.978 L 377.963 17.628 380.598 17.628 C 382.047 17.628,383.232 17.620,383.232 17.610 C 383.232 17.601,382.367 16.505,381.311 15.174 C 380.254 13.844,379.235 12.561,379.047 12.324 L 378.704 11.891 378.916 11.815 C 380.927 11.094,382.015 9.124,381.947 6.327 C 381.871 3.234,380.093 1.352,376.892 0.978 C 376.397 0.920,375.607 0.908,372.424 0.907 L 369.070 0.907 369.070 9.267 M87.395 4.380 C 87.395 7.647,87.398 7.832,87.436 7.843 C 87.458 7.850,88.408 8.672,89.547 9.672 C 90.685 10.671,91.624 11.488,91.634 11.488 C 91.643 11.488,91.651 9.918,91.651 7.998 L 91.651 4.508 93.017 4.517 C 94.332 4.526,94.391 4.528,94.565 4.576 C 95.987 4.971,96.023 6.916,94.616 7.389 L 94.430 7.452 93.436 7.460 L 92.442 7.468 92.442 9.000 L 92.442 10.532 93.483 10.541 C 94.659 10.550,94.662 10.550,95.070 10.750 C 96.268 11.337,96.266 13.127,95.067 13.706 C 94.587 13.937,94.724 13.930,90.785 13.930 L 87.395 13.930 87.395 15.791 L 87.395 17.651 90.901 17.651 C 94.484 17.650,94.947 17.641,95.592 17.558 C 98.238 17.219,99.773 15.793,100.173 13.306 C 100.464 11.494,99.636 9.754,98.063 8.875 C 97.831 8.745,97.832 8.747,97.947 8.686 C 98.883 8.188,99.526 7.007,99.522 5.791 C 99.514 3.345,97.984 1.554,95.488 1.071 C 94.834 0.944,94.944 0.947,91.029 0.937 L 87.395 0.927 87.395 4.380 M181.387 4.605 C 182.483 4.791,183.204 5.337,183.359 6.098 C 183.414 6.371,183.414 12.174,183.358 12.426 C 182.924 14.391,178.570 14.432,178.069 12.475 C 178.004 12.220,177.997 6.370,178.061 6.086 C 178.311 4.984,179.776 4.331,181.387 4.605 M391.352 4.603 C 392.415 4.786,393.110 5.288,393.318 6.023 C 393.384 6.258,393.384 12.254,393.318 12.488 C 392.775 14.411,388.490 14.392,388.036 12.464 C 387.983 12.238,387.982 6.267,388.035 6.057 C 388.309 4.975,389.775 4.332,391.352 4.603 M166.461 4.949 C 168.323 5.517,168.296 8.092,166.423 8.599 L 166.198 8.660 164.797 8.669 L 163.395 8.678 163.395 6.780 L 163.395 4.881 164.843 4.889 C 166.263 4.897,166.294 4.898,166.461 4.949 M376.423 4.947 C 378.081 5.414,378.313 7.706,376.779 8.453 C 376.357 8.659,376.206 8.674,374.634 8.674 L 373.372 8.674 373.372 6.778 L 373.372 4.882 374.808 4.889 C 376.199 4.896,376.250 4.898,376.423 4.947 M44.953 5.669 C 44.953 5.679,45.210 6.770,45.523 8.093 C 45.837 9.416,46.093 10.501,46.093 10.505 C 46.093 10.509,45.538 10.512,44.859 10.512 C 43.881 10.512,43.626 10.506,43.635 10.483 C 43.641 10.467,43.916 9.373,44.247 8.052 C 44.823 5.756,44.851 5.651,44.901 5.651 C 44.930 5.651,44.953 5.659,44.953 5.669 M108.742 8.052 C 109.054 9.373,109.314 10.467,109.320 10.483 C 109.328 10.506,109.073 10.512,108.093 10.512 C 107.113 10.512,106.858 10.506,106.865 10.483 C 106.871 10.467,107.147 9.373,107.478 8.052 C 108.029 5.862,108.085 5.651,108.128 5.651 C 108.171 5.651,108.222 5.849,108.742 8.052"></path></svg>') !important;
	display: inline !important;
	position: absolute !important;
	left: unset !important;
	bottom: 7px !important;
	top: unset !important;
	right: 15px !important;
	opacity: 0.3 !important;
	padding: 0 !important;
	margin: 0 !important;
	visibility: visible !important;
	transform: unset !important;
	animation: unset !important;
	pointer-events: none !important;
	z-index: -1 !important;
}
html:only-child > head + body div.app_b1f720 > div.app_de4237 > div.layers__1c917.layers_a23c37 > div.layer__2efaa.baseLayer__8fda3 + div.layer__2efaa > div.standardSidebarView__1129a > div.sidebarRegion__60457 > div.sidebarRegionScroller__1fa7e.thin_b1c063.scrollerBase_dc3aa9.fade_ba0fa0 > nav.sidebar__9e3e2 > div.side_b4b3f6 > div.info__755e1 {
	position: relative !important;
}
html:only-child > head + body div.app_b1f720 > div.app_de4237 > div.layers__1c917.layers_a23c37 > div.layer__2efaa.baseLayer__8fda3 + div.layer__2efaa > div.standardSidebarView__1129a > div.sidebarRegion__60457 > div.sidebarRegionScroller__1fa7e.thin_b1c063.scrollerBase_dc3aa9.fade_ba0fa0 > nav.sidebar__9e3e2 > div.side_b4b3f6 > div.info__755e1::after {
	content: "Stevontavius by" !important;
	font-size: 12px !important;
	color: var(--text-muted) !important;
	cursor: pointer !important;
	display: inline !important;
	opacity: 1 !important;
	padding: 0 !important;
	margin: 0 !important;
	cursor: text !important;
	visibility: visible !important;
	position: relative !important;
	top: unset !important;
	left: unset !important;
	bottom: unset !important;
	right: unset !important;
	transform: unset !important;
	animation: unset !important;
}
html:only-child > head + body div.app_b1f720 > div.app_de4237 > div.layers__1c917.layers_a23c37 > div.layer__2efaa.baseLayer__8fda3 + div.layer__2efaa > div.standardSidebarView__1129a > div.sidebarRegion__60457 > div.sidebarRegionScroller__1fa7e.thin_b1c063.scrollerBase_dc3aa9.fade_ba0fa0 > nav.sidebar__9e3e2 > div.side_b4b3f6 > div.info__755e1::before {
	content: "" !important;
	font-size: 12px !important;
	font-weight: 600 !important;
	color: rgb(var(--accentcolor_v)) !important;
	display: inline !important;
	opacity: 1 !important;
	padding: 0 !important;
	margin: 0 !important;
	cursor: pointer !important;
	visibility: visible !important;
	position: absolute !important;
	top: unset !important;
	left: 117px !important;
	bottom: 8px !important;
	right: unset !important;
	transform: unset !important;
	animation: unset !important;
}
