#define CHECK_COMMAND(expectedName) \
  if (strcmp(#expectedName, name) == 0) { \
    return new expectedName(m_manager, arguments, this); \
  }

CHECK_COMMAND(Visit)
CHECK_COMMAND(FindXpath)
CHECK_COMMAND(Reset)
CHECK_COMMAND(Node)
CHECK_COMMAND(Evaluate)
CHECK_COMMAND(Execute)
CHECK_COMMAND(FrameFocus)
CHECK_COMMAND(Header)
CHECK_COMMAND(Render)
CHECK_COMMAND(Body)
CHECK_COMMAND(Status)
CHECK_COMMAND(Headers)
CHECK_COMMAND(SetCookie)
CHECK_COMMAND(ClearCookies)
CHECK_COMMAND(GetCookies)
CHECK_COMMAND(SetProxy)
CHECK_COMMAND(ConsoleMessages)
CHECK_COMMAND(CurrentUrl)
CHECK_COMMAND(WindowResize)
CHECK_COMMAND(IgnoreSslErrors)
CHECK_COMMAND(SetSkipImageLoading)
CHECK_COMMAND(WindowFocus)
CHECK_COMMAND(GetWindowHandles)
CHECK_COMMAND(GetWindowHandle)
CHECK_COMMAND(Authenticate)
CHECK_COMMAND(EnableLogging)
CHECK_COMMAND(SetConfirmAction)
CHECK_COMMAND(SetPromptAction)
CHECK_COMMAND(SetPromptText)
CHECK_COMMAND(ClearPromptText)
CHECK_COMMAND(JavascriptAlertMessages)
CHECK_COMMAND(JavascriptConfirmMessages)
CHECK_COMMAND(JavascriptPromptMessages)
CHECK_COMMAND(GetTimeout)
CHECK_COMMAND(SetTimeout)
CHECK_COMMAND(SetUrlBlacklist)
CHECK_COMMAND(Title)
CHECK_COMMAND(Version)
CHECK_COMMAND(FindCss)
CHECK_COMMAND(WindowClose)
CHECK_COMMAND(WindowOpen)
CHECK_COMMAND(WindowSize)
CHECK_COMMAND(WindowMaximize)
CHECK_COMMAND(GoBack)
CHECK_COMMAND(GoForward)
CHECK_COMMAND(AcceptAlert)
CHECK_COMMAND(FindModal)
CHECK_COMMAND(SetUnknownUrlMode)
CHECK_COMMAND(AllowUrl)
CHECK_COMMAND(BlockUrl)
