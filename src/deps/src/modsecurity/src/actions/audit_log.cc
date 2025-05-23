/*
 * ModSecurity, http://www.modsecurity.org/
 * Copyright (c) 2015 - 2021 Trustwave Holdings, Inc. (http://www.trustwave.com/)
 *
 * You may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * If any of the files related to licensing are missing or if you have any
 * other questions related to licensing please contact Trustwave Holdings, Inc.
 * directly using the email address security@modsecurity.org.
 *
 */

#include "src/actions/audit_log.h"

#include <iostream>
#include <string>
#include <memory>

#include "modsecurity/transaction.h"
#include "modsecurity/rule_message.h"
#include "modsecurity/rules_set.h"

namespace modsecurity {
namespace actions {


bool AuditLog::evaluate(RuleWithActions *rule, Transaction *transaction, RuleMessage &ruleMessage) {
    ruleMessage.m_noAuditLog = false;
    ms_dbg_a(transaction, 9, "Saving transaction to logs");
    ruleMessage.m_saveMessage = true;

    return true;
}


}  // namespace actions
}  // namespace modsecurity
