class Solution:
    def numUniqueEmails(self, emails: List[str]) -> int:
        for e in emails:
            # split into two
            email, domain = e.split('@')
            # remove dots
            cleanEmail = []
            cleanEmail[:0] = email
            cleanEmail = [ i for i in cleanEmail if i != '.' ]
            # remove from +
            if '+' in cleanEmail:
                cleanEmail = cleanEmail[:cleanEmail.index('+')]
            # convert email into string
            cleanEmail = ''.join(cleanEmail)
            # join email and domain
            emails[emails.index(e)] = cleanEmail + '@' + domain
        emails = list(dict.fromkeys(emails))
        return len(emails)
