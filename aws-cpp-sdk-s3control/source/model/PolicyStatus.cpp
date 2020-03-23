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

#include <aws/s3control/model/PolicyStatus.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace S3Control
{
namespace Model
{

PolicyStatus::PolicyStatus() : 
    m_isPublic(false),
    m_isPublicHasBeenSet(false)
{
}

PolicyStatus::PolicyStatus(const XmlNode& xmlNode) : 
    m_isPublic(false),
    m_isPublicHasBeenSet(false)
{
  *this = xmlNode;
}

PolicyStatus& PolicyStatus::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode isPublicNode = resultNode.FirstChild("IsPublic");
    if(!isPublicNode.IsNull())
    {
      m_isPublic = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isPublicNode.GetText()).c_str()).c_str());
      m_isPublicHasBeenSet = true;
    }
  }

  return *this;
}

void PolicyStatus::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_isPublicHasBeenSet)
  {
   XmlNode isPublicNode = parentNode.CreateChildElement("IsPublic");
   ss << std::boolalpha << m_isPublic;
   isPublicNode.SetText(ss.str());
   ss.str("");
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
