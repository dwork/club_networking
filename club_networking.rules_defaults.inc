<?php
/**
 * @file
 * club_networking.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function club_networking_default_rules_configuration() {
  $items = array();
  $items['rules_update_unassigned_referred_club_chapter_content_'] = entity_import('rules_config', '{ "rules_update_unassigned_referred_club_chapter_content_" : {
      "LABEL" : "Update unassigned \\u0022REFERRED\\u0022 Club\\/Chapter (Content)",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "php" ],
      "ON" : [ "node_presave" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : {
                "business_exchange" : "business_exchange",
                "referral_exchange" : "referral_exchange"
              }
            }
          }
        }
      ],
      "DO" : [
        { "php_eval" : { "code" : "\\/\\/ Referring Member (can\\u0027t rely on it being the same chapter as the data-entry person)\\r\\n$user = user_load( $node-\\u003Efield_referring_member[\\u0027und\\u0027][0][\\u0027target_id\\u0027] );\\r\\n$node-\\u003Efield_chapter[\\u0027und\\u0027][0][\\u0027target_id\\u0027] = $user-\\u003Efield_chapter[\\u0027und\\u0027][0][\\u0027target_id\\u0027];\\r\\n\\/\\/ Referred Member (always have to look it up -- could be same or different chapter)\\r\\n$user = user_load( $node-\\u003Efield_referred_member[\\u0027und\\u0027][0][\\u0027target_id\\u0027] );\\r\\n$node-\\u003Efield_referred_chapter_club[\\u0027und\\u0027][0][\\u0027target_id\\u0027] = $user-\\u003Efield_chapter[\\u0027und\\u0027][0][\\u0027target_id\\u0027];" } }
      ]
    }
  }');
  return $items;
}
