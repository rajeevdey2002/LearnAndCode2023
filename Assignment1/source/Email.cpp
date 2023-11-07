#include "Email.h"

Email::Email(int spamEmail, int standardEmail, int emailWithAttachments)
 : spamEmailCount{spamEmail}, standardEmailCount{standardEmail}, emailWithAttachmentsCount{emailWithAttachments}
{
}

double Email::calculateCarbonFootPrint()
{
    double carbonFootPrint;
    carbonFootPrint = (spamEmailCount * spamEmail) + (standardEmailCount * standardEmail) + (emailWithAttachmentsCount * emailWithAttachments);
    return carbonFootPrint;
}