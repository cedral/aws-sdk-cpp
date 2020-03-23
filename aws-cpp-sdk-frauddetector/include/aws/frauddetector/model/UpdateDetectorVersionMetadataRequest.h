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
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/FraudDetectorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

  /**
   */
  class AWS_FRAUDDETECTOR_API UpdateDetectorVersionMetadataRequest : public FraudDetectorRequest
  {
  public:
    UpdateDetectorVersionMetadataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDetectorVersionMetadata"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The detector ID.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>The detector ID.</p>
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * <p>The detector ID.</p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * <p>The detector ID.</p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * <p>The detector ID.</p>
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * <p>The detector ID.</p>
     */
    inline UpdateDetectorVersionMetadataRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>The detector ID.</p>
     */
    inline UpdateDetectorVersionMetadataRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>The detector ID.</p>
     */
    inline UpdateDetectorVersionMetadataRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>The detector version ID. </p>
     */
    inline const Aws::String& GetDetectorVersionId() const{ return m_detectorVersionId; }

    /**
     * <p>The detector version ID. </p>
     */
    inline bool DetectorVersionIdHasBeenSet() const { return m_detectorVersionIdHasBeenSet; }

    /**
     * <p>The detector version ID. </p>
     */
    inline void SetDetectorVersionId(const Aws::String& value) { m_detectorVersionIdHasBeenSet = true; m_detectorVersionId = value; }

    /**
     * <p>The detector version ID. </p>
     */
    inline void SetDetectorVersionId(Aws::String&& value) { m_detectorVersionIdHasBeenSet = true; m_detectorVersionId = std::move(value); }

    /**
     * <p>The detector version ID. </p>
     */
    inline void SetDetectorVersionId(const char* value) { m_detectorVersionIdHasBeenSet = true; m_detectorVersionId.assign(value); }

    /**
     * <p>The detector version ID. </p>
     */
    inline UpdateDetectorVersionMetadataRequest& WithDetectorVersionId(const Aws::String& value) { SetDetectorVersionId(value); return *this;}

    /**
     * <p>The detector version ID. </p>
     */
    inline UpdateDetectorVersionMetadataRequest& WithDetectorVersionId(Aws::String&& value) { SetDetectorVersionId(std::move(value)); return *this;}

    /**
     * <p>The detector version ID. </p>
     */
    inline UpdateDetectorVersionMetadataRequest& WithDetectorVersionId(const char* value) { SetDetectorVersionId(value); return *this;}


    /**
     * <p>The description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description.</p>
     */
    inline UpdateDetectorVersionMetadataRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description.</p>
     */
    inline UpdateDetectorVersionMetadataRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description.</p>
     */
    inline UpdateDetectorVersionMetadataRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet;

    Aws::String m_detectorVersionId;
    bool m_detectorVersionIdHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
