#Features-based FAQ

a Drupal module by Jeff Robbins / Lullabot

---------

**Features-based FAQ** is a Drupal module created using [Development Seed](http://developmentseed.org)'s excellent [Features](http://drupal.org/project/features) module.

This module creates a FAQ page at yoursite.com/faq. The page has a table-of-contents listing of questions at the top of the page which links to question/answer pairs at the bottom of the page. This is a classic design pattern for FAQ pages throughout the web. However, this module uses Views to create the page and you can go in and tweak the output to your heart's desire. Administrators can also sort and rearrange questions using an easy drag-and-drop interface.

This module:

* Creates a content type called "FAQ" where the *title* and *body* fields are called *question* and *answer*. New items are added to the FAQ page by creating new FAQ content items. (node/add/faq)
* Comments on FAQ items are disabled and revisioning is enabled (uses [Strongarm](http://drupal.org/project/strongarm)) 
* Creates a View at example.com/faq which lists both a table-of-contents at the top, and the questions and answers below. Users can click on the table-of-contents listings to jump down the page to read the answers.
* Creates a permissioned tab called "sort" on the FAQ page. Clicking this tab allows site admins to drag-and-drop to sort the order of questions/answers using [DraggableViews](http://drupal.org/project/draggableviews). This tab/page only appears to users with the "edit any faq content" permission.

All Views and settings can be overridden to create your own custom FAQ which works as you need. But Features-based FAQ will get you set up with all of the above features simply by enabling the module.

Required modules:

* [Views](http://drupal.org/project/views)
* [DraggableViews](http://drupal.org/project/draggableviews)
* [CTools](http://drupal.org/project/ctools)
* [Strongarm](http://drupal.org/project/strongarm)

Optional/helpful:

* [Features](http://drupal.org/project/features)