﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WAFV2
{
namespace Model
{
  class Statement;

  /**
   * <note> <p>This is the latest version of <b>AWS WAF</b>, named AWS WAFV2,
   * released in November, 2019. For information, including how to migrate your AWS
   * WAF resources from the prior release, see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
   * WAF Developer Guide</a>. </p> </note> <p>A logical rule statement used to
   * combine other rule statements with OR logic. You provide more than one
   * <a>Statement</a> within the <code>OrStatement</code>. </p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/OrStatement">AWS
   * API Reference</a></p>
   */
  class AWS_WAFV2_API OrStatement
  {
  public:
    OrStatement();
    OrStatement(Aws::Utils::Json::JsonView jsonValue);
    OrStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The statements to combine with OR logic. You can use any statements that can
     * be nested.</p>
     */
    inline const Aws::Vector<Statement>& GetStatements() const{ return m_statements; }

    /**
     * <p>The statements to combine with OR logic. You can use any statements that can
     * be nested.</p>
     */
    inline bool StatementsHasBeenSet() const { return m_statementsHasBeenSet; }

    /**
     * <p>The statements to combine with OR logic. You can use any statements that can
     * be nested.</p>
     */
    inline void SetStatements(const Aws::Vector<Statement>& value) { m_statementsHasBeenSet = true; m_statements = value; }

    /**
     * <p>The statements to combine with OR logic. You can use any statements that can
     * be nested.</p>
     */
    inline void SetStatements(Aws::Vector<Statement>&& value) { m_statementsHasBeenSet = true; m_statements = std::move(value); }

    /**
     * <p>The statements to combine with OR logic. You can use any statements that can
     * be nested.</p>
     */
    inline OrStatement& WithStatements(const Aws::Vector<Statement>& value) { SetStatements(value); return *this;}

    /**
     * <p>The statements to combine with OR logic. You can use any statements that can
     * be nested.</p>
     */
    inline OrStatement& WithStatements(Aws::Vector<Statement>&& value) { SetStatements(std::move(value)); return *this;}

    /**
     * <p>The statements to combine with OR logic. You can use any statements that can
     * be nested.</p>
     */
    inline OrStatement& AddStatements(const Statement& value) { m_statementsHasBeenSet = true; m_statements.push_back(value); return *this; }

    /**
     * <p>The statements to combine with OR logic. You can use any statements that can
     * be nested.</p>
     */
    inline OrStatement& AddStatements(Statement&& value) { m_statementsHasBeenSet = true; m_statements.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Statement> m_statements;
    bool m_statementsHasBeenSet;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
