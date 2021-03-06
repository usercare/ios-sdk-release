#import <Foundation/Foundation.h>

@interface UCLocalizedStringsDataSource : NSObject

- (id)initWithDictionary:(NSDictionary *)dictionary;

@property (nonatomic, strong) NSString *backToFaq;
@property (nonatomic, strong) NSString *vipLounge;
@property (nonatomic, strong) NSString *negativeSubmit;
@property (nonatomic, strong) NSString *negativeHint;
@property (nonatomic, strong) NSString *negativeTitle;
@property (nonatomic, strong) NSString *negativeText;
@property (nonatomic, strong) NSString *negativeMessageAgent;
@property (nonatomic, strong) NSString *positiveTitle;
@property (nonatomic, strong) NSString *positiveText;

@property (nonatomic, strong) NSString *faqSearchTitle;
@property (nonatomic, strong) NSString *faqSearchNoResults;
@property (nonatomic, strong) NSString *faqTopQuestions;
@property (nonatomic, strong) NSString *faqSections;
@property (nonatomic, strong) NSString *faqSearchSectionTitle;
@property (nonatomic, strong) NSString *faqSearchHint;
@property (nonatomic, strong) NSString *faqEscalationMessage;
@property (nonatomic, strong) NSString *faqTitle;
@property (nonatomic, strong) NSString *noFAQsTitle;
@property (nonatomic, strong) NSString *unknownFaqTitle;
@property (nonatomic, strong) NSString *faqFeedbackYesTitle;
@property (nonatomic, strong) NSString *faqFeedbackNoTitle;
@property (nonatomic, strong) NSString *faqFeedbackHelpfulLabel;
@property (nonatomic, strong) NSString *faqLastUpdated;
@property (nonatomic, strong) NSString *faqDateFormat;

@property (nonatomic, strong) NSString *messagingSocketConnectionError;
@property (nonatomic, strong) NSString *messagingDone;
@property (nonatomic, strong) NSString *messagingSend;
@property (nonatomic, strong) NSString *messagingNewMessage;
@property (nonatomic, strong) NSString *messagingDateFormat;
@property (nonatomic, strong) NSString *messagingTimeFormat;
@property (nonatomic, strong) NSString *greetingMessage;
@property (nonatomic, strong) NSString *messagingHeaderTitle;

@property (nonatomic, strong) NSString *messagingPromptTitle;
@property (nonatomic, strong) NSString *messagingPromptPlaceholderName;
@property (nonatomic, strong) NSString *messagingPromptPlaceholderSurname;
@property (nonatomic, strong) NSString *messagingPromptPlaceholderEmail;
@property (nonatomic, strong) NSString *messagingPromptInvalid;
@property (nonatomic, strong) NSString *messagingPromptEmpty;
@property (nonatomic, strong) NSString *messagingPromptDone;
@property (nonatomic, strong) NSString *messagingPromptSkip;
@property (nonatomic, strong) NSString *messagingPromptSave;

@property (nonatomic, strong) NSString *ticketsDateFormat;
@property (nonatomic, strong) NSString *ticketsTitle;
@property (nonatomic, strong) NSString *ticketsOpenNew;
@property (nonatomic, strong) NSString *ticketsTicketText;
@property (nonatomic, strong) NSString *ticketsOpenText;
@property (nonatomic, strong) NSString *ticketsOpenedText;
@property (nonatomic, strong) NSString *ticketsClosedText;
@property (nonatomic, strong) NSString *ticketsBonusesText;
@property (nonatomic, strong) NSString *ticketsMessagesWaitingText;
@property (nonatomic, strong) NSString *noTicketsTitleText;
@property (nonatomic, strong) NSString *noTicketsMessageText;
@property (nonatomic, strong) NSString *createTicketButtonText;

@property (nonatomic, strong) NSString *noNetworkAlertText;
@property (nonatomic, strong) NSString *connectionError;

@property (nonatomic, strong) NSString *dialogRetry;
@property (nonatomic, strong) NSString *dialogDismiss;
@property (nonatomic, strong) NSString *cancel;
@property (nonatomic, strong) NSString *loading;
@property (nonatomic, strong) NSString *landingCancel;
@property (nonatomic, strong) NSString *dismiss;

@property (nonatomic, strong) NSString *titleFaq;
@property (nonatomic, strong) NSString *titleVipLounge;
@property (nonatomic, strong) NSString *titleMessaging;
@property (nonatomic, strong) NSString *titleMyTickets;
@property (nonatomic, strong) NSString *titleLandingPage;

@end
